// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from segway_msgs:srv/RosGetRotateFunctionCfgCmd.idl
// generated code does not contain a copyright notice

#ifndef SEGWAY_MSGS__SRV__DETAIL__ROS_GET_ROTATE_FUNCTION_CFG_CMD__BUILDER_HPP_
#define SEGWAY_MSGS__SRV__DETAIL__ROS_GET_ROTATE_FUNCTION_CFG_CMD__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "segway_msgs/srv/detail/ros_get_rotate_function_cfg_cmd__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace segway_msgs
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::segway_msgs::srv::RosGetRotateFunctionCfgCmd_Request>()
{
  return ::segway_msgs::srv::RosGetRotateFunctionCfgCmd_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace segway_msgs


namespace segway_msgs
{

namespace srv
{

namespace builder
{

class Init_RosGetRotateFunctionCfgCmd_Response_cfg_insitu_rotation_cmd
{
public:
  Init_RosGetRotateFunctionCfgCmd_Response_cfg_insitu_rotation_cmd()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::segway_msgs::srv::RosGetRotateFunctionCfgCmd_Response cfg_insitu_rotation_cmd(::segway_msgs::srv::RosGetRotateFunctionCfgCmd_Response::_cfg_insitu_rotation_cmd_type arg)
  {
    msg_.cfg_insitu_rotation_cmd = std::move(arg);
    return std::move(msg_);
  }

private:
  ::segway_msgs::srv::RosGetRotateFunctionCfgCmd_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::segway_msgs::srv::RosGetRotateFunctionCfgCmd_Response>()
{
  return segway_msgs::srv::builder::Init_RosGetRotateFunctionCfgCmd_Response_cfg_insitu_rotation_cmd();
}

}  // namespace segway_msgs

#endif  // SEGWAY_MSGS__SRV__DETAIL__ROS_GET_ROTATE_FUNCTION_CFG_CMD__BUILDER_HPP_
