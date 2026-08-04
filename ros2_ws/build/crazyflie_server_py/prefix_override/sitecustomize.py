import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/mouha/crazyflie/ros2_ws/install/crazyflie_server_py'
