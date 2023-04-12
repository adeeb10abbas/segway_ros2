// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from segway_msgs:msg/Ticksfb.idl
// generated code does not contain a copyright notice

#ifndef SEGWAY_MSGS__MSG__DETAIL__TICKSFB__BUILDER_HPP_
#define SEGWAY_MSGS__MSG__DETAIL__TICKSFB__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "segway_msgs/msg/detail/ticksfb__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace segway_msgs
{

namespace msg
{

namespace builder
{

class Init_Ticksfb_ticks_timestamp
{
public:
  explicit Init_Ticksfb_ticks_timestamp(::segway_msgs::msg::Ticksfb & msg)
  : msg_(msg)
  {}
  ::segway_msgs::msg::Ticksfb ticks_timestamp(::segway_msgs::msg::Ticksfb::_ticks_timestamp_type arg)
  {
    msg_.ticks_timestamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::segway_msgs::msg::Ticksfb msg_;
};

class Init_Ticksfb_rr_ticks
{
public:
  explicit Init_Ticksfb_rr_ticks(::segway_msgs::msg::Ticksfb & msg)
  : msg_(msg)
  {}
  Init_Ticksfb_ticks_timestamp rr_ticks(::segway_msgs::msg::Ticksfb::_rr_ticks_type arg)
  {
    msg_.rr_ticks = std::move(arg);
    return Init_Ticksfb_ticks_timestamp(msg_);
  }

private:
  ::segway_msgs::msg::Ticksfb msg_;
};

class Init_Ticksfb_rl_ticks
{
public:
  explicit Init_Ticksfb_rl_ticks(::segway_msgs::msg::Ticksfb & msg)
  : msg_(msg)
  {}
  Init_Ticksfb_rr_ticks rl_ticks(::segway_msgs::msg::Ticksfb::_rl_ticks_type arg)
  {
    msg_.rl_ticks = std::move(arg);
    return Init_Ticksfb_rr_ticks(msg_);
  }

private:
  ::segway_msgs::msg::Ticksfb msg_;
};

class Init_Ticksfb_fr_ticks
{
public:
  explicit Init_Ticksfb_fr_ticks(::segway_msgs::msg::Ticksfb & msg)
  : msg_(msg)
  {}
  Init_Ticksfb_rl_ticks fr_ticks(::segway_msgs::msg::Ticksfb::_fr_ticks_type arg)
  {
    msg_.fr_ticks = std::move(arg);
    return Init_Ticksfb_rl_ticks(msg_);
  }

private:
  ::segway_msgs::msg::Ticksfb msg_;
};

class Init_Ticksfb_fl_ticks
{
public:
  Init_Ticksfb_fl_ticks()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Ticksfb_fr_ticks fl_ticks(::segway_msgs::msg::Ticksfb::_fl_ticks_type arg)
  {
    msg_.fl_ticks = std::move(arg);
    return Init_Ticksfb_fr_ticks(msg_);
  }

private:
  ::segway_msgs::msg::Ticksfb msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::segway_msgs::msg::Ticksfb>()
{
  return segway_msgs::msg::builder::Init_Ticksfb_fl_ticks();
}

}  // namespace segway_msgs

#endif  // SEGWAY_MSGS__MSG__DETAIL__TICKSFB__BUILDER_HPP_
