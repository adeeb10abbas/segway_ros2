// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from segway_msgs:msg/Errorcodefb.idl
// generated code does not contain a copyright notice

#ifndef SEGWAY_MSGS__MSG__DETAIL__ERRORCODEFB__BUILDER_HPP_
#define SEGWAY_MSGS__MSG__DETAIL__ERRORCODEFB__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "segway_msgs/msg/detail/errorcodefb__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace segway_msgs
{

namespace msg
{

namespace builder
{

class Init_Errorcodefb_brake_error
{
public:
  explicit Init_Errorcodefb_brake_error(::segway_msgs::msg::Errorcodefb & msg)
  : msg_(msg)
  {}
  ::segway_msgs::msg::Errorcodefb brake_error(::segway_msgs::msg::Errorcodefb::_brake_error_type arg)
  {
    msg_.brake_error = std::move(arg);
    return std::move(msg_);
  }

private:
  ::segway_msgs::msg::Errorcodefb msg_;
};

class Init_Errorcodefb_bms_error
{
public:
  explicit Init_Errorcodefb_bms_error(::segway_msgs::msg::Errorcodefb & msg)
  : msg_(msg)
  {}
  Init_Errorcodefb_brake_error bms_error(::segway_msgs::msg::Errorcodefb::_bms_error_type arg)
  {
    msg_.bms_error = std::move(arg);
    return Init_Errorcodefb_brake_error(msg_);
  }

private:
  ::segway_msgs::msg::Errorcodefb msg_;
};

class Init_Errorcodefb_rear_right_motor_error
{
public:
  explicit Init_Errorcodefb_rear_right_motor_error(::segway_msgs::msg::Errorcodefb & msg)
  : msg_(msg)
  {}
  Init_Errorcodefb_bms_error rear_right_motor_error(::segway_msgs::msg::Errorcodefb::_rear_right_motor_error_type arg)
  {
    msg_.rear_right_motor_error = std::move(arg);
    return Init_Errorcodefb_bms_error(msg_);
  }

private:
  ::segway_msgs::msg::Errorcodefb msg_;
};

class Init_Errorcodefb_rear_left_motor_error
{
public:
  explicit Init_Errorcodefb_rear_left_motor_error(::segway_msgs::msg::Errorcodefb & msg)
  : msg_(msg)
  {}
  Init_Errorcodefb_rear_right_motor_error rear_left_motor_error(::segway_msgs::msg::Errorcodefb::_rear_left_motor_error_type arg)
  {
    msg_.rear_left_motor_error = std::move(arg);
    return Init_Errorcodefb_rear_right_motor_error(msg_);
  }

private:
  ::segway_msgs::msg::Errorcodefb msg_;
};

class Init_Errorcodefb_front_right_motor_error
{
public:
  explicit Init_Errorcodefb_front_right_motor_error(::segway_msgs::msg::Errorcodefb & msg)
  : msg_(msg)
  {}
  Init_Errorcodefb_rear_left_motor_error front_right_motor_error(::segway_msgs::msg::Errorcodefb::_front_right_motor_error_type arg)
  {
    msg_.front_right_motor_error = std::move(arg);
    return Init_Errorcodefb_rear_left_motor_error(msg_);
  }

private:
  ::segway_msgs::msg::Errorcodefb msg_;
};

class Init_Errorcodefb_front_left_motor_error
{
public:
  explicit Init_Errorcodefb_front_left_motor_error(::segway_msgs::msg::Errorcodefb & msg)
  : msg_(msg)
  {}
  Init_Errorcodefb_front_right_motor_error front_left_motor_error(::segway_msgs::msg::Errorcodefb::_front_left_motor_error_type arg)
  {
    msg_.front_left_motor_error = std::move(arg);
    return Init_Errorcodefb_front_right_motor_error(msg_);
  }

private:
  ::segway_msgs::msg::Errorcodefb msg_;
};

class Init_Errorcodefb_central_error
{
public:
  explicit Init_Errorcodefb_central_error(::segway_msgs::msg::Errorcodefb & msg)
  : msg_(msg)
  {}
  Init_Errorcodefb_front_left_motor_error central_error(::segway_msgs::msg::Errorcodefb::_central_error_type arg)
  {
    msg_.central_error = std::move(arg);
    return Init_Errorcodefb_front_left_motor_error(msg_);
  }

private:
  ::segway_msgs::msg::Errorcodefb msg_;
};

class Init_Errorcodefb_host_error
{
public:
  Init_Errorcodefb_host_error()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Errorcodefb_central_error host_error(::segway_msgs::msg::Errorcodefb::_host_error_type arg)
  {
    msg_.host_error = std::move(arg);
    return Init_Errorcodefb_central_error(msg_);
  }

private:
  ::segway_msgs::msg::Errorcodefb msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::segway_msgs::msg::Errorcodefb>()
{
  return segway_msgs::msg::builder::Init_Errorcodefb_host_error();
}

}  // namespace segway_msgs

#endif  // SEGWAY_MSGS__MSG__DETAIL__ERRORCODEFB__BUILDER_HPP_
