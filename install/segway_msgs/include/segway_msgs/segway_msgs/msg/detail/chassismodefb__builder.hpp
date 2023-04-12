// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from segway_msgs:msg/Chassismodefb.idl
// generated code does not contain a copyright notice

#ifndef SEGWAY_MSGS__MSG__DETAIL__CHASSISMODEFB__BUILDER_HPP_
#define SEGWAY_MSGS__MSG__DETAIL__CHASSISMODEFB__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "segway_msgs/msg/detail/chassismodefb__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace segway_msgs
{

namespace msg
{

namespace builder
{

class Init_Chassismodefb_chassis_mode
{
public:
  Init_Chassismodefb_chassis_mode()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::segway_msgs::msg::Chassismodefb chassis_mode(::segway_msgs::msg::Chassismodefb::_chassis_mode_type arg)
  {
    msg_.chassis_mode = std::move(arg);
    return std::move(msg_);
  }

private:
  ::segway_msgs::msg::Chassismodefb msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::segway_msgs::msg::Chassismodefb>()
{
  return segway_msgs::msg::builder::Init_Chassismodefb_chassis_mode();
}

}  // namespace segway_msgs

#endif  // SEGWAY_MSGS__MSG__DETAIL__CHASSISMODEFB__BUILDER_HPP_
