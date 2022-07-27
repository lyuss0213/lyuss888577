import os

from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch.actions import ExecuteProcess, IncludeLaunchDescription
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.substitutions import LaunchConfiguration

from launch_ros.actions import Node

def generate_launch_description():
	return LaunchDescription(
        [
        	ExecuteProcess(
                cmd=["ros2", "run", "px4_ros_com", "position_calculator_iris1"],
                output="screen",
            ),
            ExecuteProcess(
                cmd=["ros2", "run", "px4_ros_com", "position_calculator_iris2"],
                output="screen",
            ),
            ExecuteProcess(
                cmd=["ros2", "run", "px4_ros_com", "iris0_takeoff"],
                output="screen",
            ),
            ExecuteProcess(
                cmd=["ros2", "run", "px4_ros_com", "iris1_takeoff"],
                output="screen",
            ),
            ExecuteProcess(
                cmd=["ros2", "run", "px4_ros_com", "iris2_takeoff"],
                output="screen",
            ),
        ]
    )
