// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from segway_msgs:srv/RosEnableChassisRotateCmd.idl
// generated code does not contain a copyright notice

#ifndef SEGWAY_MSGS__SRV__DETAIL__ROS_ENABLE_CHASSIS_ROTATE_CMD__BUILDER_HPP_
#define SEGWAY_MSGS__SRV__DETAIL__ROS_ENABLE_CHASSIS_ROTATE_CMD__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "segway_msgs/srv/detail/ros_enable_chassis_rotate_cmd__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace segway_msgs
{

namespace srv
{

namespace builder
{

class Init_RosEnableChassisRotateCmd_Request_ros_enablechassis_rotate_cmd
{
public:
  Init_RosEnableChassisRotateCmd_Request_ros_enablechassis_rotate_cmd()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::segway_msgs::srv::RosEnableChassisRotateCmd_Request ros_enablechassis_rotate_cmd(::segway_msgs::srv::RosEnableChassisRotateCmd_Request::_ros_enablechassis_rotate_cmd_type arg)
  {
    msg_.ros_enablechassis_rotate_cmd = std::move(arg);
    return std::move(msg_);
  }

private:
  ::segway_msgs::srv::RosEnableChassisRotateCmd_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::segway_msgs::srv::RosEnableChassisRotateCmd_Request>()
{
  return segway_msgs::srv::builder::Init_RosEnableChassisRotateCmd_Request_ros_enablechassis_rotate_cmd();
}

}  // namespace segway_msgs


namespace segway_msgs
{

namespace srv
{

namespace builder
{

class Init_RosEnableChassisRotateCmd_Response_chassis_enablerotate_result
{
public:
  Init_RosEnableChassisRotateCmd_Response_chassis_enablerotate_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::segway_msgs::srv::RosEnableChassisRotateCmd_Response chassis_enablerotate_result(::segway_msgs::srv::RosEnableChassisRotateCmd_Response::_chassis_enablerotate_result_type arg)
  {
    msg_.chassis_enablerotate_result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::segway_msgs::srv::RosEnableChassisRotateCmd_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::segway_msgs::srv::RosEnableChassisRotateCmd_Response>()
{
  return segway_msgs::srv::builder::Init_RosEnableChassisRotateCmd_Response_chassis_enablerotate_result();
}

}  // namespace segway_msgs

#endif  // SEGWAY_MSGS__SRV__DETAIL__ROS_ENABLE_CHASSIS_ROTATE_CMD__BUILDER_HPP_
