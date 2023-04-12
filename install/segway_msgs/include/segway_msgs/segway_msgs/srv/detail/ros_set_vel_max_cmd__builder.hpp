// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from segway_msgs:srv/RosSetVelMaxCmd.idl
// generated code does not contain a copyright notice

#ifndef SEGWAY_MSGS__SRV__DETAIL__ROS_SET_VEL_MAX_CMD__BUILDER_HPP_
#define SEGWAY_MSGS__SRV__DETAIL__ROS_SET_VEL_MAX_CMD__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "segway_msgs/srv/detail/ros_set_vel_max_cmd__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace segway_msgs
{

namespace srv
{

namespace builder
{

class Init_RosSetVelMaxCmd_Request_ros_setangular_max_vel
{
public:
  explicit Init_RosSetVelMaxCmd_Request_ros_setangular_max_vel(::segway_msgs::srv::RosSetVelMaxCmd_Request & msg)
  : msg_(msg)
  {}
  ::segway_msgs::srv::RosSetVelMaxCmd_Request ros_setangular_max_vel(::segway_msgs::srv::RosSetVelMaxCmd_Request::_ros_setangular_max_vel_type arg)
  {
    msg_.ros_setangular_max_vel = std::move(arg);
    return std::move(msg_);
  }

private:
  ::segway_msgs::srv::RosSetVelMaxCmd_Request msg_;
};

class Init_RosSetVelMaxCmd_Request_ros_setbackward_max_vel
{
public:
  explicit Init_RosSetVelMaxCmd_Request_ros_setbackward_max_vel(::segway_msgs::srv::RosSetVelMaxCmd_Request & msg)
  : msg_(msg)
  {}
  Init_RosSetVelMaxCmd_Request_ros_setangular_max_vel ros_setbackward_max_vel(::segway_msgs::srv::RosSetVelMaxCmd_Request::_ros_setbackward_max_vel_type arg)
  {
    msg_.ros_setbackward_max_vel = std::move(arg);
    return Init_RosSetVelMaxCmd_Request_ros_setangular_max_vel(msg_);
  }

private:
  ::segway_msgs::srv::RosSetVelMaxCmd_Request msg_;
};

class Init_RosSetVelMaxCmd_Request_ros_setforward_max_vel
{
public:
  Init_RosSetVelMaxCmd_Request_ros_setforward_max_vel()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RosSetVelMaxCmd_Request_ros_setbackward_max_vel ros_setforward_max_vel(::segway_msgs::srv::RosSetVelMaxCmd_Request::_ros_setforward_max_vel_type arg)
  {
    msg_.ros_setforward_max_vel = std::move(arg);
    return Init_RosSetVelMaxCmd_Request_ros_setbackward_max_vel(msg_);
  }

private:
  ::segway_msgs::srv::RosSetVelMaxCmd_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::segway_msgs::srv::RosSetVelMaxCmd_Request>()
{
  return segway_msgs::srv::builder::Init_RosSetVelMaxCmd_Request_ros_setforward_max_vel();
}

}  // namespace segway_msgs


namespace segway_msgs
{

namespace srv
{

namespace builder
{

class Init_RosSetVelMaxCmd_Response_chassis_setmax_vel_result
{
public:
  Init_RosSetVelMaxCmd_Response_chassis_setmax_vel_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::segway_msgs::srv::RosSetVelMaxCmd_Response chassis_setmax_vel_result(::segway_msgs::srv::RosSetVelMaxCmd_Response::_chassis_setmax_vel_result_type arg)
  {
    msg_.chassis_setmax_vel_result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::segway_msgs::srv::RosSetVelMaxCmd_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::segway_msgs::srv::RosSetVelMaxCmd_Response>()
{
  return segway_msgs::srv::builder::Init_RosSetVelMaxCmd_Response_chassis_setmax_vel_result();
}

}  // namespace segway_msgs

#endif  // SEGWAY_MSGS__SRV__DETAIL__ROS_SET_VEL_MAX_CMD__BUILDER_HPP_
