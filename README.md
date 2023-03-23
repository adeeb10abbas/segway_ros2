# segway_ros2
This repository contains a collection of ROS2 packages for controlling and simulating a Segway RMP platform. The packages include:

- `segway_description`: Provides the URDF model, meshes, and associated launch files for visualizing and simulating the Segway platform in Gazebo and RViz.
- `segway_hardware_interface`: Implements a hardware interface for the Segway platform, enabling seamless integration with the ROS2 control framework.
- `segway_rmp`: A package that provides a low-level interface to communicate with the Segway RMP platform.

## Prerequisites
  - ROS2 Humble
  - Gazebo 11 or later
  - Rviz2
### Installation
Clone this repository into your ROS2 workspace:
```
cd ~/ros2_ws/src
git clone https://github.com/adeeb10abbas/segway_ros2.git
```
Build the workspace:
```
cd ~/ros2_ws
colcon build
source install/setup.bash
```
## Usage
### Visualize the Segway model in RViz
To visualize the Segway model in RViz, run the following command:
```
ros2 launch segway_description display.launch.py
```
### Simulate the Segway model in Gazebo
To simulate the Segway model in Gazebo, run the following command:
```
ros2 launch segway_description gazebo.launch.py
```
Control the Segway platform using ROS2 control
To control the Segway platform using the ROS2 control framework, you need to:
  - Implement a custom controller or use an existing controller compatible with the hardware interface provided by the segway_hardware_interface package.
  - Create a launch file that loads the controller and hardware interface configuration and starts the ros2_control_node.
  For more information on using ROS2 control, refer to the official documentation.


## Contributing
Contributions to this repository are welcome. Please submit a pull request or create an issue to report bugs or request new features.

## License
This project is licensed under the MIT License.

## Maintainers
  - [Adeeb Abbas](https://github.com/adeeb10abbas/)
