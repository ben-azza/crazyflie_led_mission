#include <Arduino.h>
#include <WiFi.h>
#include <micro_ros_platformio.h>
#include <stdio.h>

#include <rcl/rcl.h>
#include <rcl/error_handling.h>
#include <rclc/rclc.h>
#include <rclc/executor.h>
#include <std_msgs/msg/bool.h>

// ---------------- Config à adapter ----------------
const char* ssid     = "TUNISIETELECOM-2.4G-kGz3";
const char* password = "KHhD8xP4";

// IP de la machine qui fait tourner l'agent micro-ROS (le PC avec ROS2)
IPAddress agent_ip(192, 168, 100, 17);
const int  agent_port = 8888;

#define LED_PIN 2   // GPIO de la LED (2 = LED embarquée sur la plupart des devkits ESP32)
// ----------------------------------------------------

rcl_subscription_t subscriber;
std_msgs__msg__Bool msg;

rclc_executor_t   executor;
rclc_support_t    support;
rcl_allocator_t   allocator;
rcl_node_t        node;

#define RCCHECK(fn) { rcl_ret_t rc = fn; if (rc != RCL_RET_OK) { error_loop(); } }

void error_loop() {
  while (1) {
    digitalWrite(LED_PIN, !digitalRead(LED_PIN));
    delay(100);
  }
}

void led_callback(const void * msgin) {
  const std_msgs__msg__Bool * led_msg = (const std_msgs__msg__Bool *)msgin;
  digitalWrite(LED_PIN, led_msg->data ? HIGH : LOW);
  Serial.print("LED command received: ");
  Serial.println(led_msg->data ? "ON" : "OFF");
}

void setup() {
  Serial.begin(115200);
  pinMode(LED_PIN, OUTPUT);
  digitalWrite(LED_PIN, LOW);

  // Transport micro-ROS via WiFi (UDP) vers l'agent
  set_microros_wifi_transports((char*)ssid, (char*)password, agent_ip, agent_port);

  delay(2000); // laisse le temps au WiFi de se connecter

  allocator = rcl_get_default_allocator();

  RCCHECK(rclc_support_init(&support, 0, NULL, &allocator));
  RCCHECK(rclc_node_init_default(&node, "esp32_led_node", "", &support));

  RCCHECK(rclc_subscription_init_default(
    &subscriber,
    &node,
    ROSIDL_GET_MSG_TYPE_SUPPORT(std_msgs, msg, Bool),
    "esp32/led_cmd"));

  RCCHECK(rclc_executor_init(&executor, &support.context, 1, &allocator));
  RCCHECK(rclc_executor_add_subscription(&executor, &subscriber, &msg, &led_callback, ON_NEW_DATA));

  Serial.println("micro-ROS ESP32 LED node ready.");
}

void loop() {
  rclc_executor_spin_some(&executor, RCL_MS_TO_NS(100));
  delay(10);
}