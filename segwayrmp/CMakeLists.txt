# cmake_minimum_required(VERSION 3.5)
# project(segwayrmp)


# set(CMAKE_CXX_STANDARD 11)

# if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
#   add_compile_options(-Wall -Wextra -Wpedantic)
# endif()

# find_package(ament_cmake REQUIRED)
# find_package(rclcpp REQUIRED)
# find_package(rclpy REQUIRED)
# find_package(rclcpp_action REQUIRED)
# find_package(std_msgs REQUIRED)
# find_package(tf2 REQUIRED)
# find_package(tf2_ros REQUIRED)
# find_package(nav_msgs REQUIRED)
# find_package(sensor_msgs REQUIRED)
# find_package(segway_msgs REQUIRED)

# include_directories(include
#   ${rclcpp_INCLUDE_DIRS}
#   ${rclpy_INCLUDE_DIRS}
#   ${std_msgs_INCLUDE_DIRS}
#   ${tf2_INCLUDE_DIRS}
#   ${nav_msgs_INCLUDE_DIRS}
#   ${sensor_msgs_INCLUDE_DIRS}
#   ${segway_msgs_INCLUDE_DIRS}
# )

# # if(CMAKE_SYSTEM_PROCESSOR STREQUAL "aarch64")
# #   set(LIBRARY_NAME "libctrl_arm64-v8a.so")
# # else()
# set(LIBRARY_NAME "libctrl_x86_64.so")
# # endif()
# # set(LIBRARY_NAME "ctrl_x86_64")
# add_executable(SmartCar
#   src/SmartCar.cpp
#   src/robot.cpp
#   src/Ge_encoder_odometry.cpp
# )
# ament_target_dependencies(SmartCar
#   rclcpp
#   rclpy
#   rclcpp_action
#   std_msgs
#   tf2
#   tf2_ros
#   nav_msgs
#   sensor_msgs
#   segway_msgs
# )

# target_link_libraries(SmartCar
#   ${rclcpp_LIBRARIES}
#   ${rclpy_LIBRARIES}
#   ${std_msgs_LIBRARIES}
#   ${tf2_LIBRARIES}
#   ${nav_msgs_LIBRARIES}
#   ${sensor_msgs_LIBRARIES}
#   ${segway_msgs_LIBRARIES}
#   ${PROJECT_SOURCE_DIR}/lib/${LIBRARY_NAME}
# )

# install(TARGETS
#   SmartCar
#   DESTINATION lib/${PROJECT_NAME}
# )

# ament_package()
cmake_minimum_required(VERSION 3.5)
project(segwayrmp)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fpic  -Wl,-R${PROJECT_SOURCE_DIR}/lib")
set(CMAKE_C_FLAGS   "${CMAKE_C_FLAGS}   -fpic")
# Default to C99
if(NOT CMAKE_C_STANDARD)
  set(CMAKE_C_STANDARD 99)
endif()

# Default to C++14
if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 14)
endif()

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(rclpy REQUIRED)
find_package(std_msgs REQUIRED)
find_package(nav_msgs REQUIRED)
find_package(sensor_msgs REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(segway_msgs REQUIRED)
find_package(tf2 REQUIRED)
find_package(tf2_ros REQUIRED)
find_package(rclcpp_action REQUIRED)
find_package(rclcpp_components REQUIRED)

add_executable(SmartCar
  src/SmartCar.cpp 
  src/robot.cpp 
)
target_include_directories(SmartCar PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:include>
)
target_link_directories(SmartCar PUBLIC 
  ${CMAKE_CURRENT_SOURCE_DIR}/lib
)
# message(WARNING ${PROJECT_SOURCE_DIR} + "!!" + ${CMAKE_CURRENT_SOURCE_DIR} + "!!" + ${PROJECT_NAME})
ament_target_dependencies(SmartCar
  "rclcpp" "std_msgs" "nav_msgs" "sensor_msgs" "geometry_msgs" "segway_msgs" "tf2" "tf2_ros"
) 
target_link_libraries(SmartCar
  ${PROJECT_SOURCE_DIR}/lib/libctrl_x86_64.so
)

add_executable(drive_segway_sample
  tools/drive_segway_sample.cpp
)
target_include_directories(drive_segway_sample PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:include>
)
ament_target_dependencies(drive_segway_sample
  "rclcpp" "std_msgs" "nav_msgs" "sensor_msgs" "geometry_msgs" "segway_msgs" "tf2" "tf2_ros"
) 

install(TARGETS
  SmartCar
  # drive_segway_sample
  DESTINATION
  lib/${PROJECT_NAME})

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  # the following line skips the linter which checks for copyrights
  # uncomment the line when a copyright and license is not present in all source files
  #set(ament_cmake_copyright_FOUND TRUE)
  # the following line skips cpplint (only works in a git repo)
  # uncomment the line when this package is not in a git repo
  #set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()