// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from segway_msgs:srv/RosResetHostPowerCmd.idl
// generated code does not contain a copyright notice

#ifndef SEGWAY_MSGS__SRV__DETAIL__ROS_RESET_HOST_POWER_CMD__BUILDER_HPP_
#define SEGWAY_MSGS__SRV__DETAIL__ROS_RESET_HOST_POWER_CMD__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "segway_msgs/srv/detail/ros_reset_host_power_cmd__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace segway_msgs
{

namespace srv
{

namespace builder
{

class Init_RosResetHostPowerCmd_Request_reset_intervaltime
{
public:
  Init_RosResetHostPowerCmd_Request_reset_intervaltime()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::segway_msgs::srv::RosResetHostPowerCmd_Request reset_intervaltime(::segway_msgs::srv::RosResetHostPowerCmd_Request::_reset_intervaltime_type arg)
  {
    msg_.reset_intervaltime = std::move(arg);
    return std::move(msg_);
  }

private:
  ::segway_msgs::srv::RosResetHostPowerCmd_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::segway_msgs::srv::RosResetHostPowerCmd_Request>()
{
  return segway_msgs::srv::builder::Init_RosResetHostPowerCmd_Request_reset_intervaltime();
}

}  // namespace segway_msgs


namespace segway_msgs
{

namespace srv
{

namespace builder
{

class Init_RosResetHostPowerCmd_Response_reset_result
{
public:
  Init_RosResetHostPowerCmd_Response_reset_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::segway_msgs::srv::RosResetHostPowerCmd_Response reset_result(::segway_msgs::srv::RosResetHostPowerCmd_Response::_reset_result_type arg)
  {
    msg_.reset_result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::segway_msgs::srv::RosResetHostPowerCmd_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::segway_msgs::srv::RosResetHostPowerCmd_Response>()
{
  return segway_msgs::srv::builder::Init_RosResetHostPowerCmd_Response_reset_result();
}

}  // namespace segway_msgs

#endif  // SEGWAY_MSGS__SRV__DETAIL__ROS_RESET_HOST_POWER_CMD__BUILDER_HPP_
