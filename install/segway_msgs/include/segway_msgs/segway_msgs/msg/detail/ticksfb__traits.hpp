// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from segway_msgs:msg/Ticksfb.idl
// generated code does not contain a copyright notice

#ifndef SEGWAY_MSGS__MSG__DETAIL__TICKSFB__TRAITS_HPP_
#define SEGWAY_MSGS__MSG__DETAIL__TICKSFB__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "segway_msgs/msg/detail/ticksfb__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace segway_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Ticksfb & msg,
  std::ostream & out)
{
  out << "{";
  // member: fl_ticks
  {
    out << "fl_ticks: ";
    rosidl_generator_traits::value_to_yaml(msg.fl_ticks, out);
    out << ", ";
  }

  // member: fr_ticks
  {
    out << "fr_ticks: ";
    rosidl_generator_traits::value_to_yaml(msg.fr_ticks, out);
    out << ", ";
  }

  // member: rl_ticks
  {
    out << "rl_ticks: ";
    rosidl_generator_traits::value_to_yaml(msg.rl_ticks, out);
    out << ", ";
  }

  // member: rr_ticks
  {
    out << "rr_ticks: ";
    rosidl_generator_traits::value_to_yaml(msg.rr_ticks, out);
    out << ", ";
  }

  // member: ticks_timestamp
  {
    out << "ticks_timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.ticks_timestamp, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Ticksfb & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: fl_ticks
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fl_ticks: ";
    rosidl_generator_traits::value_to_yaml(msg.fl_ticks, out);
    out << "\n";
  }

  // member: fr_ticks
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fr_ticks: ";
    rosidl_generator_traits::value_to_yaml(msg.fr_ticks, out);
    out << "\n";
  }

  // member: rl_ticks
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rl_ticks: ";
    rosidl_generator_traits::value_to_yaml(msg.rl_ticks, out);
    out << "\n";
  }

  // member: rr_ticks
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rr_ticks: ";
    rosidl_generator_traits::value_to_yaml(msg.rr_ticks, out);
    out << "\n";
  }

  // member: ticks_timestamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ticks_timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.ticks_timestamp, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Ticksfb & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace segway_msgs

namespace rosidl_generator_traits
{

[[deprecated("use segway_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const segway_msgs::msg::Ticksfb & msg,
  std::ostream & out, size_t indentation = 0)
{
  segway_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use segway_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const segway_msgs::msg::Ticksfb & msg)
{
  return segway_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<segway_msgs::msg::Ticksfb>()
{
  return "segway_msgs::msg::Ticksfb";
}

template<>
inline const char * name<segway_msgs::msg::Ticksfb>()
{
  return "segway_msgs/msg/Ticksfb";
}

template<>
struct has_fixed_size<segway_msgs::msg::Ticksfb>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<segway_msgs::msg::Ticksfb>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<segway_msgs::msg::Ticksfb>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SEGWAY_MSGS__MSG__DETAIL__TICKSFB__TRAITS_HPP_
