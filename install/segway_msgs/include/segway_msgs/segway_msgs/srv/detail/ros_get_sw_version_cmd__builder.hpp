// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from segway_msgs:srv/RosGetSwVersionCmd.idl
// generated code does not contain a copyright notice

#ifndef SEGWAY_MSGS__SRV__DETAIL__ROS_GET_SW_VERSION_CMD__BUILDER_HPP_
#define SEGWAY_MSGS__SRV__DETAIL__ROS_GET_SW_VERSION_CMD__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "segway_msgs/srv/detail/ros_get_sw_version_cmd__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace segway_msgs
{

namespace srv
{

namespace builder
{

class Init_RosGetSwVersionCmd_Request_ros_getsw_version_cmd
{
public:
  Init_RosGetSwVersionCmd_Request_ros_getsw_version_cmd()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::segway_msgs::srv::RosGetSwVersionCmd_Request ros_getsw_version_cmd(::segway_msgs::srv::RosGetSwVersionCmd_Request::_ros_getsw_version_cmd_type arg)
  {
    msg_.ros_getsw_version_cmd = std::move(arg);
    return std::move(msg_);
  }

private:
  ::segway_msgs::srv::RosGetSwVersionCmd_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::segway_msgs::srv::RosGetSwVersionCmd_Request>()
{
  return segway_msgs::srv::builder::Init_RosGetSwVersionCmd_Request_ros_getsw_version_cmd();
}

}  // namespace segway_msgs


namespace segway_msgs
{

namespace srv
{

namespace builder
{

class Init_RosGetSwVersionCmd_Response_motor_version
{
public:
  explicit Init_RosGetSwVersionCmd_Response_motor_version(::segway_msgs::srv::RosGetSwVersionCmd_Response & msg)
  : msg_(msg)
  {}
  ::segway_msgs::srv::RosGetSwVersionCmd_Response motor_version(::segway_msgs::srv::RosGetSwVersionCmd_Response::_motor_version_type arg)
  {
    msg_.motor_version = std::move(arg);
    return std::move(msg_);
  }

private:
  ::segway_msgs::srv::RosGetSwVersionCmd_Response msg_;
};

class Init_RosGetSwVersionCmd_Response_central_version
{
public:
  explicit Init_RosGetSwVersionCmd_Response_central_version(::segway_msgs::srv::RosGetSwVersionCmd_Response & msg)
  : msg_(msg)
  {}
  Init_RosGetSwVersionCmd_Response_motor_version central_version(::segway_msgs::srv::RosGetSwVersionCmd_Response::_central_version_type arg)
  {
    msg_.central_version = std::move(arg);
    return Init_RosGetSwVersionCmd_Response_motor_version(msg_);
  }

private:
  ::segway_msgs::srv::RosGetSwVersionCmd_Response msg_;
};

class Init_RosGetSwVersionCmd_Response_host_pantchversion
{
public:
  explicit Init_RosGetSwVersionCmd_Response_host_pantchversion(::segway_msgs::srv::RosGetSwVersionCmd_Response & msg)
  : msg_(msg)
  {}
  Init_RosGetSwVersionCmd_Response_central_version host_pantchversion(::segway_msgs::srv::RosGetSwVersionCmd_Response::_host_pantchversion_type arg)
  {
    msg_.host_pantchversion = std::move(arg);
    return Init_RosGetSwVersionCmd_Response_central_version(msg_);
  }

private:
  ::segway_msgs::srv::RosGetSwVersionCmd_Response msg_;
};

class Init_RosGetSwVersionCmd_Response_host_version
{
public:
  Init_RosGetSwVersionCmd_Response_host_version()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RosGetSwVersionCmd_Response_host_pantchversion host_version(::segway_msgs::srv::RosGetSwVersionCmd_Response::_host_version_type arg)
  {
    msg_.host_version = std::move(arg);
    return Init_RosGetSwVersionCmd_Response_host_pantchversion(msg_);
  }

private:
  ::segway_msgs::srv::RosGetSwVersionCmd_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::segway_msgs::srv::RosGetSwVersionCmd_Response>()
{
  return segway_msgs::srv::builder::Init_RosGetSwVersionCmd_Response_host_version();
}

}  // namespace segway_msgs

#endif  // SEGWAY_MSGS__SRV__DETAIL__ROS_GET_SW_VERSION_CMD__BUILDER_HPP_
