// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from segway_msgs:srv/ChassisSendEvent.idl
// generated code does not contain a copyright notice

#ifndef SEGWAY_MSGS__SRV__DETAIL__CHASSIS_SEND_EVENT__BUILDER_HPP_
#define SEGWAY_MSGS__SRV__DETAIL__CHASSIS_SEND_EVENT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "segway_msgs/srv/detail/chassis_send_event__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace segway_msgs
{

namespace srv
{

namespace builder
{

class Init_ChassisSendEvent_Request_chassis_sendevent_id
{
public:
  Init_ChassisSendEvent_Request_chassis_sendevent_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::segway_msgs::srv::ChassisSendEvent_Request chassis_sendevent_id(::segway_msgs::srv::ChassisSendEvent_Request::_chassis_sendevent_id_type arg)
  {
    msg_.chassis_sendevent_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::segway_msgs::srv::ChassisSendEvent_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::segway_msgs::srv::ChassisSendEvent_Request>()
{
  return segway_msgs::srv::builder::Init_ChassisSendEvent_Request_chassis_sendevent_id();
}

}  // namespace segway_msgs


namespace segway_msgs
{

namespace srv
{

namespace builder
{

class Init_ChassisSendEvent_Response_ros_isreceived
{
public:
  Init_ChassisSendEvent_Response_ros_isreceived()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::segway_msgs::srv::ChassisSendEvent_Response ros_isreceived(::segway_msgs::srv::ChassisSendEvent_Response::_ros_isreceived_type arg)
  {
    msg_.ros_isreceived = std::move(arg);
    return std::move(msg_);
  }

private:
  ::segway_msgs::srv::ChassisSendEvent_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::segway_msgs::srv::ChassisSendEvent_Response>()
{
  return segway_msgs::srv::builder::Init_ChassisSendEvent_Response_ros_isreceived();
}

}  // namespace segway_msgs

#endif  // SEGWAY_MSGS__SRV__DETAIL__CHASSIS_SEND_EVENT__BUILDER_HPP_
