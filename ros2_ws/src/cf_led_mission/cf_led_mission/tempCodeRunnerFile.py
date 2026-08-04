import rclpy
from crazyflie_py import Crazyswarm
from std_msgs.msg import Bool


def main():
    # Initialise ROS2 + charge la config crazyflies.yaml
    swarm = Crazyswarm()
    timeHelper = swarm.timeHelper
    cf = swarm.allcfs.crazyflies[0]

    # Publisher pour commander la LED de l'ESP32 via micro-ROS
    led_pub = swarm.allcfs.create_publisher(Bool, '/esp32/led_cmd', 10)

    print("Décollage vers 0.2 m...")
    cf.takeoff(targetHeight=0.2, duration=2.0)
    timeHelper.sleep(2.5)

    # Laisse le temps au Flow Deck / Kalman de stabiliser la position hold
    print("Stabilisation de la position hold...")
    timeHelper.sleep(1.0)

    # Commande LED ON
    print("Envoi commande LED ON")
    msg = Bool()
    msg.data = True
    led_pub.publish(msg)

    timeHelper.sleep(5.0)

    # Commande LED OFF
    print("Envoi commande LED OFF")
    msg.data = False
    led_pub.publish(msg)

    # Atterrissage
    print("Atterrissage...")
    cf.land(targetHeight=0.02, duration=2.0)
    timeHelper.sleep(2.5)

    print("Mission terminée.")


if __name__ == '__main__':
    main()