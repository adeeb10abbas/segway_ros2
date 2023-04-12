// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from segway_msgs:srv/RosSetLoadParamCmd.idl
// generated code does not contain a copyright notice

#ifndef SEGWAY_MSGS__SRV__DETAIL__ROS_SET_LOAD_PARAM_CMD__BUILDER_HPP_
#define SEGWAY_MSGS__SRV__DETAIL__ROS_SET_LOAD_PARAM_CMD__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "segway_msgs/srv/detail/ros_set_load_param_cmd__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace segway_msgs
{

namespace srv
{

namespace builder
{

class Init_RosSetLoadParamCmd_Request_ros_setload_param
{
public:
  Init_RosSetLoadParamCmd_Request_ros_setload_param()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::segway_msgs::srv::RosSetLoadParamCmd_Request ros_setload_param(::segway_msgs::srv::RosSetLoadParamCmd_Request::_ros_setload_param_type arg)
  {
    msg_.ros_setload_param = std::move(arg);
    return std::move(msg_);
  }

private:
  ::segway_msgs::srv::RosSetLoadParamCmd_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::segway_msgs::srv::RosSetLoadParamCmd_Request>()
{
  return segway_msgs::srv::builder::Init_RosSetLoadParamCmd_Request_ros_setload_param();
}

}  // namespace segway_msgs


namespace segway_msgs
{

namespace srv
{

namespace builder
{

class Init_RosSetLoadParamCmd_Response_chassis_setload_param_result
{
public:
  Init_RosSetLoadParamCmd_Response_chassis_setload_param_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::segway_msgs::srv::RosSetLoadParamCmd_Response chassis_setload_param_result(::segway_msgs::srv::RosSetLoadParamCmd_Response::_chassis_setload_param_result_type arg)
  {
    msg_.chassis_setload_param_result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::segway_msgs::srv::RosSetLoadParamCmd_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::segway_msgs::srv::RosSetLoadParamCmd_Response>()
{
  return segway_msgs::srv::builder::Init_RosSetLoadParamCmd_Response_chassis_setload_param_result();
}

}  // namespace segway_msgs

#endif  // SEGWAY_MSGS__SRV__DETAIL__ROS_SET_LOAD_PARAM_CMD__BUILDER_HPP_
