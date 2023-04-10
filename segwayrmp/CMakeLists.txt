cmake_minimum_required(VERSION 3.5)
project(segwayrmp)

if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 14)
endif()

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(rclpy REQUIRED)
find_package(rclcpp_action REQUIRED)
find_package(std_msgs REQUIRED)
find_package(tf2 REQUIRED)
find_package(tf2_ros REQUIRED)
find_package(nav_msgs REQUIRED)
find_package(sensor_msgs REQUIRED)
find_package(segway_msgs REQUIRED)

include_directories(include
  ${rclcpp_INCLUDE_DIRS}
  ${rclpy_INCLUDE_DIRS}
  ${std_msgs_INCLUDE_DIRS}
  ${tf2_INCLUDE_DIRS}
  ${nav_msgs_INCLUDE_DIRS}
  ${sensor_msgs_INCLUDE_DIRS}
  ${segway_msgs_INCLUDE_DIRS}
)

if(CMAKE_SYSTEM_PROCESSOR STREQUAL "aarch64")
  set(LIBRARY_NAME "libctrl_arm64-v8a.so")
else()
  set(LIBRARY_NAME "libctrl_x86_64.so")
endif()

add_executable(SmartCar
  src/SmartCar.cpp
  src/robot.cpp
  src/Ge_encoder_odometry.cpp
)
ament_target_dependencies(SmartCar
  rclcpp
  rclpy
  rclcpp_action
  std_msgs
  tf2
  tf2_ros
  nav_msgs
  sensor_msgs
  segway_msgs
)

target_link_libraries(SmartCar
  ${rclcpp_LIBRARIES}
  ${rclpy_LIBRARIES}
  ${std_msgs_LIBRARIES}
  ${tf2_LIBRARIES}
  ${nav_msgs_LIBRARIES}
  ${sensor_msgs_LIBRARIES}
  ${segway_msgs_LIBRARIES}
  ${PROJECT_SOURCE_DIR}/lib/${LIBRARY_NAME}
)

install(TARGETS
  SmartCar
  DESTINATION lib/${PROJECT_NAME}
)

ament_package()
