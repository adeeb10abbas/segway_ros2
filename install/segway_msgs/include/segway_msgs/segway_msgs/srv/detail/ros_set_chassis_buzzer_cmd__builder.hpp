// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from segway_msgs:srv/RosSetChassisBuzzerCmd.idl
// generated code does not contain a copyright notice

#ifndef SEGWAY_MSGS__SRV__DETAIL__ROS_SET_CHASSIS_BUZZER_CMD__BUILDER_HPP_
#define SEGWAY_MSGS__SRV__DETAIL__ROS_SET_CHASSIS_BUZZER_CMD__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "segway_msgs/srv/detail/ros_set_chassis_buzzer_cmd__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace segway_msgs
{

namespace srv
{

namespace builder
{

class Init_RosSetChassisBuzzerCmd_Request_ros_setchassis_buzzer_cmd
{
public:
  Init_RosSetChassisBuzzerCmd_Request_ros_setchassis_buzzer_cmd()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::segway_msgs::srv::RosSetChassisBuzzerCmd_Request ros_setchassis_buzzer_cmd(::segway_msgs::srv::RosSetChassisBuzzerCmd_Request::_ros_setchassis_buzzer_cmd_type arg)
  {
    msg_.ros_setchassis_buzzer_cmd = std::move(arg);
    return std::move(msg_);
  }

private:
  ::segway_msgs::srv::RosSetChassisBuzzerCmd_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::segway_msgs::srv::RosSetChassisBuzzerCmd_Request>()
{
  return segway_msgs::srv::builder::Init_RosSetChassisBuzzerCmd_Request_ros_setchassis_buzzer_cmd();
}

}  // namespace segway_msgs


namespace segway_msgs
{

namespace srv
{

namespace builder
{

class Init_RosSetChassisBuzzerCmd_Response_set_buzzerresult
{
public:
  Init_RosSetChassisBuzzerCmd_Response_set_buzzerresult()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::segway_msgs::srv::RosSetChassisBuzzerCmd_Response set_buzzerresult(::segway_msgs::srv::RosSetChassisBuzzerCmd_Response::_set_buzzerresult_type arg)
  {
    msg_.set_buzzerresult = std::move(arg);
    return std::move(msg_);
  }

private:
  ::segway_msgs::srv::RosSetChassisBuzzerCmd_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::segway_msgs::srv::RosSetChassisBuzzerCmd_Response>()
{
  return segway_msgs::srv::builder::Init_RosSetChassisBuzzerCmd_Response_set_buzzerresult();
}

}  // namespace segway_msgs

#endif  // SEGWAY_MSGS__SRV__DETAIL__ROS_SET_CHASSIS_BUZZER_CMD__BUILDER_HPP_
