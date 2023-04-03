cmake_minimum_required(VERSION 3.5)
project(segway_msgs)

if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 14)
endif()

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

find_package(ament_cmake REQUIRED)
find_package(rosidl_default_generators REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(nav_msgs REQUIRED)
find_package(std_msgs REQUIRED)
find_package(action_msgs REQUIRED)

set(msg_files
  "msg/Errorcodefb.msg"
  "msg/Motorworkmodefb.msg"
  "msg/Speedfb.msg"
  "msg/Ticksfb.msg"
  "msg/Bmsfb.msg"
  "msg/Chassisctrlsrcfb.msg"
  "msg/Chassismileagemeterfb.msg"
  "msg/Chassismodefb.msg"
)

set(srv_files
  "srv/RosEnableChassisRotateCmd.srv"
  "srv/RosGetChassisRotateSwitchCmd.srv"
  "srv/RosClearChassisErrorCodeCmd.srv"
  "srv/RosGetChassisSnCmd.srv"
  "srv/RosGetLoadParamCmd.srv"
  "srv/RosGetSwVersionCmd.srv"
  "srv/RosGetVelMaxFeedbackCmd.srv"
  "srv/RosSetChassisEnableCmd.srv"
  "srv/RosSetChassisPoweroffCmd.srv"
  "srv/RosSetLoadParamCmd.srv"
  "srv/RosSetVelMaxCmd.srv"
  "srv/ChassisSendEvent.srv"
  "srv/RosResetHostPowerCmd.srv"
  "srv/RosStartChassisLeftRotateCmd.srv"
  "srv/RosStartChassisRightRotateCmd.srv"
  "srv/RosStopChassisRotateCmd.srv"
  "srv/RosGetRotateFunctionCfgCmd.srv"
  "srv/RosSetCfgRotateFunctionCmd.srv"
  "srv/RosGetHostAndChassisMatchCmd.srv"
  "srv/RosSetChassisBuzzerCmd.srv"
)


set(action_files
  "action/RosSetIapCmd.action"
)

rosidl_generate_interfaces(${PROJECT_NAME}
  ${msg_files}
  ${srv_files}
  ${action_files}
  DEPENDENCIES geometry_msgs nav_msgs std_msgs action_msgs
)

ament_export_dependencies(rosidl_default_runtime)

ament_package()

