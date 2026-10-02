import os

from launch import LaunchDescription
from launch_ros.actions import Node
from ament_index_python.packages import get_package_share_directory


def generate_launch_description():

    # Get YAML configuration file
    config_file = os.path.join(
        get_package_share_directory('tribonacci_cpp'),
        'config',
        'tribonacci_params.yaml'
    )

    # C++ Action Server
    tribonacci_server = Node(
        package='tribonacci_cpp',
        executable='tribonacci_server',
        name='tribonacci_server',
        output='screen',
        parameters=[config_file]
    )

    # Python Action Client
    tribonacci_client = Node(
        package='tribonacci_py',
        executable='tribonacci_client',
        name='tribonacci_client',
        output='screen'
    )

    return LaunchDescription([
        tribonacci_server,
        tribonacci_client
    ])
