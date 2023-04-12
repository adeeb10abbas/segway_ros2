// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from segway_msgs:srv/RosClearChassisErrorCodeCmd.idl
// generated code does not contain a copyright notice

#ifndef SEGWAY_MSGS__SRV__DETAIL__ROS_CLEAR_CHASSIS_ERROR_CODE_CMD__BUILDER_HPP_
#define SEGWAY_MSGS__SRV__DETAIL__ROS_CLEAR_CHASSIS_ERROR_CODE_CMD__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "segway_msgs/srv/detail/ros_clear_chassis_error_code_cmd__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace segway_msgs
{

namespace srv
{

namespace builder
{

class Init_RosClearChassisErrorCodeCmd_Request_clear_chassiserror_code_cmd
{
public:
  Init_RosClearChassisErrorCodeCmd_Request_clear_chassiserror_code_cmd()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::segway_msgs::srv::RosClearChassisErrorCodeCmd_Request clear_chassiserror_code_cmd(::segway_msgs::srv::RosClearChassisErrorCodeCmd_Request::_clear_chassiserror_code_cmd_type arg)
  {
    msg_.clear_chassiserror_code_cmd = std::move(arg);
    return std::move(msg_);
  }

private:
  ::segway_msgs::srv::RosClearChassisErrorCodeCmd_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::segway_msgs::srv::RosClearChassisErrorCodeCmd_Request>()
{
  return segway_msgs::srv::builder::Init_RosClearChassisErrorCodeCmd_Request_clear_chassiserror_code_cmd();
}

}  // namespace segway_msgs


namespace segway_msgs
{

namespace srv
{

namespace builder
{

class Init_RosClearChassisErrorCodeCmd_Response_clear_chassiserror_code_result
{
public:
  Init_RosClearChassisErrorCodeCmd_Response_clear_chassiserror_code_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::segway_msgs::srv::RosClearChassisErrorCodeCmd_Response clear_chassiserror_code_result(::segway_msgs::srv::RosClearChassisErrorCodeCmd_Response::_clear_chassiserror_code_result_type arg)
  {
    msg_.clear_chassiserror_code_result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::segway_msgs::srv::RosClearChassisErrorCodeCmd_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::segway_msgs::srv::RosClearChassisErrorCodeCmd_Response>()
{
  return segway_msgs::srv::builder::Init_RosClearChassisErrorCodeCmd_Response_clear_chassiserror_code_result();
}

}  // namespace segway_msgs

#endif  // SEGWAY_MSGS__SRV__DETAIL__ROS_CLEAR_CHASSIS_ERROR_CODE_CMD__BUILDER_HPP_
