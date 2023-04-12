// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from segway_msgs:srv/RosSetChassisPoweroffCmd.idl
// generated code does not contain a copyright notice

#ifndef SEGWAY_MSGS__SRV__DETAIL__ROS_SET_CHASSIS_POWEROFF_CMD__BUILDER_HPP_
#define SEGWAY_MSGS__SRV__DETAIL__ROS_SET_CHASSIS_POWEROFF_CMD__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "segway_msgs/srv/detail/ros_set_chassis_poweroff_cmd__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace segway_msgs
{

namespace srv
{

namespace builder
{

class Init_RosSetChassisPoweroffCmd_Request_ros_setchassis_poweroff_cmd
{
public:
  Init_RosSetChassisPoweroffCmd_Request_ros_setchassis_poweroff_cmd()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::segway_msgs::srv::RosSetChassisPoweroffCmd_Request ros_setchassis_poweroff_cmd(::segway_msgs::srv::RosSetChassisPoweroffCmd_Request::_ros_setchassis_poweroff_cmd_type arg)
  {
    msg_.ros_setchassis_poweroff_cmd = std::move(arg);
    return std::move(msg_);
  }

private:
  ::segway_msgs::srv::RosSetChassisPoweroffCmd_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::segway_msgs::srv::RosSetChassisPoweroffCmd_Request>()
{
  return segway_msgs::srv::builder::Init_RosSetChassisPoweroffCmd_Request_ros_setchassis_poweroff_cmd();
}

}  // namespace segway_msgs


namespace segway_msgs
{

namespace srv
{

namespace builder
{

class Init_RosSetChassisPoweroffCmd_Response_chassis_setpoweroff_result
{
public:
  Init_RosSetChassisPoweroffCmd_Response_chassis_setpoweroff_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::segway_msgs::srv::RosSetChassisPoweroffCmd_Response chassis_setpoweroff_result(::segway_msgs::srv::RosSetChassisPoweroffCmd_Response::_chassis_setpoweroff_result_type arg)
  {
    msg_.chassis_setpoweroff_result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::segway_msgs::srv::RosSetChassisPoweroffCmd_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::segway_msgs::srv::RosSetChassisPoweroffCmd_Response>()
{
  return segway_msgs::srv::builder::Init_RosSetChassisPoweroffCmd_Response_chassis_setpoweroff_result();
}

}  // namespace segway_msgs

#endif  // SEGWAY_MSGS__SRV__DETAIL__ROS_SET_CHASSIS_POWEROFF_CMD__BUILDER_HPP_
