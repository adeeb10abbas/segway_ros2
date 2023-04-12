// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from segway_msgs:msg/Motorworkmodefb.idl
// generated code does not contain a copyright notice

#ifndef SEGWAY_MSGS__MSG__DETAIL__MOTORWORKMODEFB__BUILDER_HPP_
#define SEGWAY_MSGS__MSG__DETAIL__MOTORWORKMODEFB__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "segway_msgs/msg/detail/motorworkmodefb__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace segway_msgs
{

namespace msg
{

namespace builder
{

class Init_Motorworkmodefb_motor_work_mode
{
public:
  Init_Motorworkmodefb_motor_work_mode()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::segway_msgs::msg::Motorworkmodefb motor_work_mode(::segway_msgs::msg::Motorworkmodefb::_motor_work_mode_type arg)
  {
    msg_.motor_work_mode = std::move(arg);
    return std::move(msg_);
  }

private:
  ::segway_msgs::msg::Motorworkmodefb msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::segway_msgs::msg::Motorworkmodefb>()
{
  return segway_msgs::msg::builder::Init_Motorworkmodefb_motor_work_mode();
}

}  // namespace segway_msgs

#endif  // SEGWAY_MSGS__MSG__DETAIL__MOTORWORKMODEFB__BUILDER_HPP_
