#!/bin/bash

# Check if the input file is provided
if [ "$#" -ne 1 ]; then
  echo "Usage: $0 input_file.cpp"
  exit 1
fi

input_file="$1"
output_file="${input_file%.cpp}_ros2.cpp"

# Create a copy of the input file as the output file
cp "$input_file" "$output_file"

# Apply changes to the output file
sed -i 's/#include <ros\/ros.h>/#include <rclcpp\/rclcpp.hpp>/g' "$output_file"
sed -i 's/ROS_WARN_STREAM/node->get_logger().warn/g' "$output_file"
sed -i 's/ROS_INFO_STREAM/node->get_logger().info/g' "$output_file"
sed -i 's/ros::NodeHandle/rclcpp::Node/g' "$output_file"
sed -i 's/ros::Time/rclcpp::Time/g' "$output_file"

# Add any other changes as needed

echo "Conversion complete. Output file: $output_file"

