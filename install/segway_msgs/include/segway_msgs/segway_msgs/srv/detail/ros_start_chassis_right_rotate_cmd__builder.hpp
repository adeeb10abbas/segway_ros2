// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from segway_msgs:srv/RosStartChassisRightRotateCmd.idl
// generated code does not contain a copyright notice

#ifndef SEGWAY_MSGS__SRV__DETAIL__ROS_START_CHASSIS_RIGHT_ROTATE_CMD__BUILDER_HPP_
#define SEGWAY_MSGS__SRV__DETAIL__ROS_START_CHASSIS_RIGHT_ROTATE_CMD__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "segway_msgs/srv/detail/ros_start_chassis_right_rotate_cmd__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace segway_msgs
{

namespace srv
{

namespace builder
{

class Init_RosStartChassisRightRotateCmd_Request_ros_startchassis_right_rotatecmd
{
public:
  Init_RosStartChassisRightRotateCmd_Request_ros_startchassis_right_rotatecmd()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::segway_msgs::srv::RosStartChassisRightRotateCmd_Request ros_startchassis_right_rotatecmd(::segway_msgs::srv::RosStartChassisRightRotateCmd_Request::_ros_startchassis_right_rotatecmd_type arg)
  {
    msg_.ros_startchassis_right_rotatecmd = std::move(arg);
    return std::move(msg_);
  }

private:
  ::segway_msgs::srv::RosStartChassisRightRotateCmd_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::segway_msgs::srv::RosStartChassisRightRotateCmd_Request>()
{
  return segway_msgs::srv::builder::Init_RosStartChassisRightRotateCmd_Request_ros_startchassis_right_rotatecmd();
}

}  // namespace segway_msgs


namespace segway_msgs
{

namespace srv
{

namespace builder
{

class Init_RosStartChassisRightRotateCmd_Response_chassis_rightrotate_result
{
public:
  Init_RosStartChassisRightRotateCmd_Response_chassis_rightrotate_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::segway_msgs::srv::RosStartChassisRightRotateCmd_Response chassis_rightrotate_result(::segway_msgs::srv::RosStartChassisRightRotateCmd_Response::_chassis_rightrotate_result_type arg)
  {
    msg_.chassis_rightrotate_result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::segway_msgs::srv::RosStartChassisRightRotateCmd_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::segway_msgs::srv::RosStartChassisRightRotateCmd_Response>()
{
  return segway_msgs::srv::builder::Init_RosStartChassisRightRotateCmd_Response_chassis_rightrotate_result();
}

}  // namespace segway_msgs

#endif  // SEGWAY_MSGS__SRV__DETAIL__ROS_START_CHASSIS_RIGHT_ROTATE_CMD__BUILDER_HPP_
