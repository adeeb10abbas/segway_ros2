// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from segway_msgs:srv/RosSetChassisEnableCmd.idl
// generated code does not contain a copyright notice

#ifndef SEGWAY_MSGS__SRV__DETAIL__ROS_SET_CHASSIS_ENABLE_CMD__BUILDER_HPP_
#define SEGWAY_MSGS__SRV__DETAIL__ROS_SET_CHASSIS_ENABLE_CMD__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "segway_msgs/srv/detail/ros_set_chassis_enable_cmd__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace segway_msgs
{

namespace srv
{

namespace builder
{

class Init_RosSetChassisEnableCmd_Request_ros_setchassis_enable_cmd
{
public:
  Init_RosSetChassisEnableCmd_Request_ros_setchassis_enable_cmd()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::segway_msgs::srv::RosSetChassisEnableCmd_Request ros_setchassis_enable_cmd(::segway_msgs::srv::RosSetChassisEnableCmd_Request::_ros_setchassis_enable_cmd_type arg)
  {
    msg_.ros_setchassis_enable_cmd = std::move(arg);
    return std::move(msg_);
  }

private:
  ::segway_msgs::srv::RosSetChassisEnableCmd_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::segway_msgs::srv::RosSetChassisEnableCmd_Request>()
{
  return segway_msgs::srv::builder::Init_RosSetChassisEnableCmd_Request_ros_setchassis_enable_cmd();
}

}  // namespace segway_msgs


namespace segway_msgs
{

namespace srv
{

namespace builder
{

class Init_RosSetChassisEnableCmd_Response_chassis_setchassis_enable_result
{
public:
  Init_RosSetChassisEnableCmd_Response_chassis_setchassis_enable_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::segway_msgs::srv::RosSetChassisEnableCmd_Response chassis_setchassis_enable_result(::segway_msgs::srv::RosSetChassisEnableCmd_Response::_chassis_setchassis_enable_result_type arg)
  {
    msg_.chassis_setchassis_enable_result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::segway_msgs::srv::RosSetChassisEnableCmd_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::segway_msgs::srv::RosSetChassisEnableCmd_Response>()
{
  return segway_msgs::srv::builder::Init_RosSetChassisEnableCmd_Response_chassis_setchassis_enable_result();
}

}  // namespace segway_msgs

#endif  // SEGWAY_MSGS__SRV__DETAIL__ROS_SET_CHASSIS_ENABLE_CMD__BUILDER_HPP_
