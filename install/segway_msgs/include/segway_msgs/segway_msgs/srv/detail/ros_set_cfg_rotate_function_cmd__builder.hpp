// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from segway_msgs:srv/RosSetCfgRotateFunctionCmd.idl
// generated code does not contain a copyright notice

#ifndef SEGWAY_MSGS__SRV__DETAIL__ROS_SET_CFG_ROTATE_FUNCTION_CMD__BUILDER_HPP_
#define SEGWAY_MSGS__SRV__DETAIL__ROS_SET_CFG_ROTATE_FUNCTION_CMD__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "segway_msgs/srv/detail/ros_set_cfg_rotate_function_cmd__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace segway_msgs
{

namespace srv
{

namespace builder
{

class Init_RosSetCfgRotateFunctionCmd_Request_cfg_insitu_rotation_function
{
public:
  Init_RosSetCfgRotateFunctionCmd_Request_cfg_insitu_rotation_function()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::segway_msgs::srv::RosSetCfgRotateFunctionCmd_Request cfg_insitu_rotation_function(::segway_msgs::srv::RosSetCfgRotateFunctionCmd_Request::_cfg_insitu_rotation_function_type arg)
  {
    msg_.cfg_insitu_rotation_function = std::move(arg);
    return std::move(msg_);
  }

private:
  ::segway_msgs::srv::RosSetCfgRotateFunctionCmd_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::segway_msgs::srv::RosSetCfgRotateFunctionCmd_Request>()
{
  return segway_msgs::srv::builder::Init_RosSetCfgRotateFunctionCmd_Request_cfg_insitu_rotation_function();
}

}  // namespace segway_msgs


namespace segway_msgs
{

namespace srv
{

namespace builder
{

class Init_RosSetCfgRotateFunctionCmd_Response_cfg_insitu_rotation_result
{
public:
  Init_RosSetCfgRotateFunctionCmd_Response_cfg_insitu_rotation_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::segway_msgs::srv::RosSetCfgRotateFunctionCmd_Response cfg_insitu_rotation_result(::segway_msgs::srv::RosSetCfgRotateFunctionCmd_Response::_cfg_insitu_rotation_result_type arg)
  {
    msg_.cfg_insitu_rotation_result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::segway_msgs::srv::RosSetCfgRotateFunctionCmd_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::segway_msgs::srv::RosSetCfgRotateFunctionCmd_Response>()
{
  return segway_msgs::srv::builder::Init_RosSetCfgRotateFunctionCmd_Response_cfg_insitu_rotation_result();
}

}  // namespace segway_msgs

#endif  // SEGWAY_MSGS__SRV__DETAIL__ROS_SET_CFG_ROTATE_FUNCTION_CMD__BUILDER_HPP_
