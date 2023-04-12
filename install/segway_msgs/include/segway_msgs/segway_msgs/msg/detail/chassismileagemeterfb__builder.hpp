// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from segway_msgs:msg/Chassismileagemeterfb.idl
// generated code does not contain a copyright notice

#ifndef SEGWAY_MSGS__MSG__DETAIL__CHASSISMILEAGEMETERFB__BUILDER_HPP_
#define SEGWAY_MSGS__MSG__DETAIL__CHASSISMILEAGEMETERFB__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "segway_msgs/msg/detail/chassismileagemeterfb__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace segway_msgs
{

namespace msg
{

namespace builder
{

class Init_Chassismileagemeterfb_vehicle_meters
{
public:
  Init_Chassismileagemeterfb_vehicle_meters()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::segway_msgs::msg::Chassismileagemeterfb vehicle_meters(::segway_msgs::msg::Chassismileagemeterfb::_vehicle_meters_type arg)
  {
    msg_.vehicle_meters = std::move(arg);
    return std::move(msg_);
  }

private:
  ::segway_msgs::msg::Chassismileagemeterfb msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::segway_msgs::msg::Chassismileagemeterfb>()
{
  return segway_msgs::msg::builder::Init_Chassismileagemeterfb_vehicle_meters();
}

}  // namespace segway_msgs

#endif  // SEGWAY_MSGS__MSG__DETAIL__CHASSISMILEAGEMETERFB__BUILDER_HPP_
