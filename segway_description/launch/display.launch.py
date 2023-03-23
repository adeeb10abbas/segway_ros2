from launch import LaunchDescription
from launch_ros.actions import Node
import launch.actions
import launch.substitutions
import os
from ament_index_python.packages import get_package_share_directory

def generate_launch_description():
    segway_description_dir = get_package_share_directory('segway_description')
    robot_description_path = os.path.join(segway_description_dir, 'urdf', 'segway.urdf')
    
    return LaunchDescription([
        launch.actions.DeclareLaunchArgument(
            'gui',
            default_value='False',
            description='Flag to enable joint_state_publisher GUI'
        ),
        Node(
            package='joint_state_publisher',
            executable='joint_state_publisher',
            name='joint_state_publisher',
            parameters=[{
                'use_gui': launch.substitutions.LaunchConfiguration('gui')
            }]
        ),
        Node(
            package='robot_state_publisher',
            executable='robot_state_publisher',
            name='robot_state_publisher',
            parameters=[{
                'robot_description': launch.substitutions.Command(['cat', robot_description_path]).perform(None)
            }],
        ),
        Node(
            package='rviz2',
            executable='rviz2',
            name='rviz2',
            arguments=['-d', os.path.join(segway_description_dir, 'rviz', 'urdf.rviz')],
        ),
    ])
