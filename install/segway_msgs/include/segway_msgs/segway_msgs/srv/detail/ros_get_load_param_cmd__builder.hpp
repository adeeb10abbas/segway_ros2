// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from segway_msgs:srv/RosGetLoadParamCmd.idl
// generated code does not contain a copyright notice

#ifndef SEGWAY_MSGS__SRV__DETAIL__ROS_GET_LOAD_PARAM_CMD__BUILDER_HPP_
#define SEGWAY_MSGS__SRV__DETAIL__ROS_GET_LOAD_PARAM_CMD__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "segway_msgs/srv/detail/ros_get_load_param_cmd__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace segway_msgs
{

namespace srv
{

namespace builder
{

class Init_RosGetLoadParamCmd_Request_ros_getload_param
{
public:
  Init_RosGetLoadParamCmd_Request_ros_getload_param()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::segway_msgs::srv::RosGetLoadParamCmd_Request ros_getload_param(::segway_msgs::srv::RosGetLoadParamCmd_Request::_ros_getload_param_type arg)
  {
    msg_.ros_getload_param = std::move(arg);
    return std::move(msg_);
  }

private:
  ::segway_msgs::srv::RosGetLoadParamCmd_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::segway_msgs::srv::RosGetLoadParamCmd_Request>()
{
  return segway_msgs::srv::builder::Init_RosGetLoadParamCmd_Request_ros_getload_param();
}

}  // namespace segway_msgs


namespace segway_msgs
{

namespace srv
{

namespace builder
{

class Init_RosGetLoadParamCmd_Response_get_loadparam
{
public:
  Init_RosGetLoadParamCmd_Response_get_loadparam()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::segway_msgs::srv::RosGetLoadParamCmd_Response get_loadparam(::segway_msgs::srv::RosGetLoadParamCmd_Response::_get_loadparam_type arg)
  {
    msg_.get_loadparam = std::move(arg);
    return std::move(msg_);
  }

private:
  ::segway_msgs::srv::RosGetLoadParamCmd_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::segway_msgs::srv::RosGetLoadParamCmd_Response>()
{
  return segway_msgs::srv::builder::Init_RosGetLoadParamCmd_Response_get_loadparam();
}

}  // namespace segway_msgs

#endif  // SEGWAY_MSGS__SRV__DETAIL__ROS_GET_LOAD_PARAM_CMD__BUILDER_HPP_
