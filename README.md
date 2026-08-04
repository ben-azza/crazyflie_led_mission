# Crazyflie 2.0 + ESP32 — ROS2 / micro-ROS Mission

Autonomous mission combining a **Crazyflie 2.0** drone (equipped with the **Flow Deck v2**) and an **ESP32** microcontroller, orchestrated through **ROS2 Jazzy** and **micro-ROS**.

## Mission Sequence

1. Crazyflie takes off and climbs to **0.2 m** altitude
2. **Position hold** is maintained using the Kalman estimator + Flow Deck v2 optical flow
3. Once the position is stable, a ROS2 command is sent to the ESP32 (via micro-ROS) to **turn on an LED**
4. Wait **5 seconds**
5. Command sent to **turn off the LED**
6. Crazyflie **lands** automatically

## Architecture

```
ROS2 orchestrator node (crazyflie_py)
        │
        ├── 2.4GHz radio (Crazyradio PA) ──► Crazyflie 2.0 + Flow Deck v2
        │
        └── Topic /esp32/led_cmd (std_msgs/Bool)
                    │
              micro-ROS agent (serial or WiFi)
                    │
                  ESP32 ──► LED (GPIO 2)
```

## Hardware Requirements

- Crazyflie 2.0 + Flow Deck v2
- Crazyradio PA dongle (firmware up to date, see below)
- ESP32 (WROOM-32 or equivalent)
- PC running Ubuntu 24.04

## Software Requirements

- ROS2 Jazzy
- PlatformIO
- Python 3.12

---

## 1. System Setup

```bash
sudo apt update
sudo apt install ros-jazzy-desktop python3-colcon-common-extensions python3-rosdep -y
sudo apt install libusb-1.0-0-dev git cmake python3-pip python3-vcstool -y
```

**USB permissions (Crazyradio):**
```bash
sudo groupadd plugdev
sudo usermod -a -G plugdev $USER
cat << 'EOF' | sudo tee /etc/udev/rules.d/99-crazyradio.rules
SUBSYSTEM=="usb", ATTRS{idVendor}=="1915", ATTRS{idProduct}=="7777", MODE="0664", GROUP="plugdev"
SUBSYSTEM=="usb", ATTRS{idVendor}=="1915", ATTRS{idProduct}=="0101", MODE="0664", GROUP="plugdev"
EOF
sudo udevadm control --reload-rules
sudo udevadm trigger
newgrp plugdev
sudo usermod -a -G dialout $USER
newgrp dialout
```

## 2. ROS2 Workspace

```bash
mkdir -p ~/crazyflie/ros2_ws/src
cd ~/crazyflie/ros2_ws/src
git clone https://github.com/IMRCLab/crazyswarm2.git --recursive
git clone -b jazzy https://github.com/micro-ROS/micro_ros_setup.git
# + custom package cf_led_mission (see src/cf_led_mission folder)
```

**Build:**
```bash
cd ~/crazyflie/ros2_ws
rosdep update
rosdep install --from-paths src --ignore-src -y
colcon build --symlink-install
source install/setup.bash
```

## 3. micro-ROS Agent

```bash
cd ~/crazyflie/ros2_ws
ros2 run micro_ros_setup create_agent_ws.sh
ros2 run micro_ros_setup build_agent.sh
source install/local_setup.bash
colcon build --symlink-install
source install/setup.bash
echo "source ~/crazyflie/ros2_ws/install/setup.bash" >> ~/.bashrc
```

## 4. ESP32 Firmware (PlatformIO)

```bash
cd ~/crazyflie/esp32_led_firmware
pio run -t upload
```

`platformio.ini`:
```ini
[env:esp32dev]
platform = espressif32
board = esp32dev
framework = arduino
board_microros_distro = humble
board_microros_transport = serial   ; or wifi depending on config
lib_deps =
    https://github.com/micro-ROS/micro_ros_platformio
monitor_speed = 115200
```

## 5. Crazyradio Firmware Update (if needed)

Required if you get the error `does not support broadcast communication`:
```bash
cd ~/crazyradio-firmware
python3 usbtools/launchBootloader.py
python3 usbtools/nrfbootload.py flash cradio-pa-0.53.bin
```

---

## Running the Project (3 terminals)

**Terminal 1 — micro-ROS agent:**
```bash
source ~/crazyflie/ros2_ws/install/setup.bash
ros2 run micro_ros_agent micro_ros_agent serial --dev /dev/ttyUSB0 -b 115200
# or over WiFi:
# ros2 run micro_ros_agent micro_ros_agent udp4 --port 8888
```

**Terminal 2 — Sanity checks:**
```bash
source ~/crazyflie/ros2_ws/install/setup.bash
ros2 topic list
ros2 topic pub /esp32/led_cmd std_msgs/msg/Bool "{data: true}" --once
```

**Terminal 3 — Full mission:**
```bash
source ~/crazyflie/ros2_ws/install/setup.bash
ros2 launch cf_led_mission mission_launch.py
```

---

## Repository Structure

```
ros2_ws/
├── src/
│   ├── crazyswarm2/            # dependency (Bitcraze)
│   ├── micro_ros_setup/        # dependency (micro-ROS)
│   └── cf_led_mission/         # custom package
│       ├── cf_led_mission/mission_node.py
│       ├── launch/mission_launch.py
│       └── config/crazyflies.yaml
esp32_led_firmware/
├── platformio.ini
└── src/main.cpp
```

## Author

Mohamed Yessine Ben Azza — INSAT, Industrial Computing and Automation (IIA)
