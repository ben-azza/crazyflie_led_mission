from launch import LaunchDescription
from launch_ros.actions import Node
from launch.actions import IncludeLaunchDescription
from launch.launch_description_sources import PythonLaunchDescriptionSource
from ament_index_python.packages import get_package_share_directory
import os

def generate_launch_description():
    crazyflie_launch = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            os.path.join(get_package_share_directory('crazyflie'),
                          'launch', 'launch.py')))
    mission_node = Node(
        package='cf_led_mission',
        executable='mission_node',
        output='screen')
    return LaunchDescription([crazyflie_launch, mission_node])