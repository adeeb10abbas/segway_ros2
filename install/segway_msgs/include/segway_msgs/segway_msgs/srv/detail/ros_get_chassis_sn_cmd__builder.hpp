// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from segway_msgs:srv/RosGetChassisSnCmd.idl
// generated code does not contain a copyright notice

#ifndef SEGWAY_MSGS__SRV__DETAIL__ROS_GET_CHASSIS_SN_CMD__BUILDER_HPP_
#define SEGWAY_MSGS__SRV__DETAIL__ROS_GET_CHASSIS_SN_CMD__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "segway_msgs/srv/detail/ros_get_chassis_sn_cmd__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace segway_msgs
{

namespace srv
{

namespace builder
{

class Init_RosGetChassisSnCmd_Request_ros_getchassis_sn
{
public:
  Init_RosGetChassisSnCmd_Request_ros_getchassis_sn()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::segway_msgs::srv::RosGetChassisSnCmd_Request ros_getchassis_sn(::segway_msgs::srv::RosGetChassisSnCmd_Request::_ros_getchassis_sn_type arg)
  {
    msg_.ros_getchassis_sn = std::move(arg);
    return std::move(msg_);
  }

private:
  ::segway_msgs::srv::RosGetChassisSnCmd_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::segway_msgs::srv::RosGetChassisSnCmd_Request>()
{
  return segway_msgs::srv::builder::Init_RosGetChassisSnCmd_Request_ros_getchassis_sn();
}

}  // namespace segway_msgs


namespace segway_msgs
{

namespace srv
{

namespace builder
{

class Init_RosGetChassisSnCmd_Response_chassis_sn
{
public:
  Init_RosGetChassisSnCmd_Response_chassis_sn()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::segway_msgs::srv::RosGetChassisSnCmd_Response chassis_sn(::segway_msgs::srv::RosGetChassisSnCmd_Response::_chassis_sn_type arg)
  {
    msg_.chassis_sn = std::move(arg);
    return std::move(msg_);
  }

private:
  ::segway_msgs::srv::RosGetChassisSnCmd_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::segway_msgs::srv::RosGetChassisSnCmd_Response>()
{
  return segway_msgs::srv::builder::Init_RosGetChassisSnCmd_Response_chassis_sn();
}

}  // namespace segway_msgs

#endif  // SEGWAY_MSGS__SRV__DETAIL__ROS_GET_CHASSIS_SN_CMD__BUILDER_HPP_
