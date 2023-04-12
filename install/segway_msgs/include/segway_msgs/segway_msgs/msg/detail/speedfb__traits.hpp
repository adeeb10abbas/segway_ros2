// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from segway_msgs:msg/Speedfb.idl
// generated code does not contain a copyright notice

#ifndef SEGWAY_MSGS__MSG__DETAIL__SPEEDFB__TRAITS_HPP_
#define SEGWAY_MSGS__MSG__DETAIL__SPEEDFB__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "segway_msgs/msg/detail/speedfb__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace segway_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Speedfb & msg,
  std::ostream & out)
{
  out << "{";
  // member: car_speed
  {
    out << "car_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.car_speed, out);
    out << ", ";
  }

  // member: turn_speed
  {
    out << "turn_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.turn_speed, out);
    out << ", ";
  }

  // member: fl_speed
  {
    out << "fl_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.fl_speed, out);
    out << ", ";
  }

  // member: fr_speed
  {
    out << "fr_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.fr_speed, out);
    out << ", ";
  }

  // member: rl_speed
  {
    out << "rl_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.rl_speed, out);
    out << ", ";
  }

  // member: rr_speed
  {
    out << "rr_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.rr_speed, out);
    out << ", ";
  }

  // member: speed_timestamp
  {
    out << "speed_timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.speed_timestamp, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Speedfb & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: car_speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "car_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.car_speed, out);
    out << "\n";
  }

  // member: turn_speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "turn_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.turn_speed, out);
    out << "\n";
  }

  // member: fl_speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fl_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.fl_speed, out);
    out << "\n";
  }

  // member: fr_speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fr_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.fr_speed, out);
    out << "\n";
  }

  // member: rl_speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rl_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.rl_speed, out);
    out << "\n";
  }

  // member: rr_speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rr_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.rr_speed, out);
    out << "\n";
  }

  // member: speed_timestamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "speed_timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.speed_timestamp, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Speedfb & msg, bool use_flow_style = false)
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
  const segway_msgs::msg::Speedfb & msg,
  std::ostream & out, size_t indentation = 0)
{
  segway_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use segway_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const segway_msgs::msg::Speedfb & msg)
{
  return segway_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<segway_msgs::msg::Speedfb>()
{
  return "segway_msgs::msg::Speedfb";
}

template<>
inline const char * name<segway_msgs::msg::Speedfb>()
{
  return "segway_msgs/msg/Speedfb";
}

template<>
struct has_fixed_size<segway_msgs::msg::Speedfb>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<segway_msgs::msg::Speedfb>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<segway_msgs::msg::Speedfb>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SEGWAY_MSGS__MSG__DETAIL__SPEEDFB__TRAITS_HPP_
