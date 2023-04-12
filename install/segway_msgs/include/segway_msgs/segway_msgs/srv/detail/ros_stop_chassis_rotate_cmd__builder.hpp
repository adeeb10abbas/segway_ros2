// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from segway_msgs:srv/RosStopChassisRotateCmd.idl
// generated code does not contain a copyright notice

#ifndef SEGWAY_MSGS__SRV__DETAIL__ROS_STOP_CHASSIS_ROTATE_CMD__BUILDER_HPP_
#define SEGWAY_MSGS__SRV__DETAIL__ROS_STOP_CHASSIS_ROTATE_CMD__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "segway_msgs/srv/detail/ros_stop_chassis_rotate_cmd__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace segway_msgs
{

namespace srv
{

namespace builder
{

class Init_RosStopChassisRotateCmd_Request_ros_stopchassis_rotate_cmd
{
public:
  Init_RosStopChassisRotateCmd_Request_ros_stopchassis_rotate_cmd()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::segway_msgs::srv::RosStopChassisRotateCmd_Request ros_stopchassis_rotate_cmd(::segway_msgs::srv::RosStopChassisRotateCmd_Request::_ros_stopchassis_rotate_cmd_type arg)
  {
    msg_.ros_stopchassis_rotate_cmd = std::move(arg);
    return std::move(msg_);
  }

private:
  ::segway_msgs::srv::RosStopChassisRotateCmd_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::segway_msgs::srv::RosStopChassisRotateCmd_Request>()
{
  return segway_msgs::srv::builder::Init_RosStopChassisRotateCmd_Request_ros_stopchassis_rotate_cmd();
}

}  // namespace segway_msgs


namespace segway_msgs
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::segway_msgs::srv::RosStopChassisRotateCmd_Response>()
{
  return ::segway_msgs::srv::RosStopChassisRotateCmd_Response(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace segway_msgs

#endif  // SEGWAY_MSGS__SRV__DETAIL__ROS_STOP_CHASSIS_ROTATE_CMD__BUILDER_HPP_
