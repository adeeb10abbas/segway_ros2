// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from segway_msgs:srv/RosGetHostAndChassisMatchCmd.idl
// generated code does not contain a copyright notice

#ifndef SEGWAY_MSGS__SRV__DETAIL__ROS_GET_HOST_AND_CHASSIS_MATCH_CMD__BUILDER_HPP_
#define SEGWAY_MSGS__SRV__DETAIL__ROS_GET_HOST_AND_CHASSIS_MATCH_CMD__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "segway_msgs/srv/detail/ros_get_host_and_chassis_match_cmd__struct.hpp"
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
auto build<::segway_msgs::srv::RosGetHostAndChassisMatchCmd_Request>()
{
  return ::segway_msgs::srv::RosGetHostAndChassisMatchCmd_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace segway_msgs


namespace segway_msgs
{

namespace srv
{

namespace builder
{

class Init_RosGetHostAndChassisMatchCmd_Response_is_matchedwith_firmware
{
public:
  Init_RosGetHostAndChassisMatchCmd_Response_is_matchedwith_firmware()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::segway_msgs::srv::RosGetHostAndChassisMatchCmd_Response is_matchedwith_firmware(::segway_msgs::srv::RosGetHostAndChassisMatchCmd_Response::_is_matchedwith_firmware_type arg)
  {
    msg_.is_matchedwith_firmware = std::move(arg);
    return std::move(msg_);
  }

private:
  ::segway_msgs::srv::RosGetHostAndChassisMatchCmd_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::segway_msgs::srv::RosGetHostAndChassisMatchCmd_Response>()
{
  return segway_msgs::srv::builder::Init_RosGetHostAndChassisMatchCmd_Response_is_matchedwith_firmware();
}

}  // namespace segway_msgs

#endif  // SEGWAY_MSGS__SRV__DETAIL__ROS_GET_HOST_AND_CHASSIS_MATCH_CMD__BUILDER_HPP_
