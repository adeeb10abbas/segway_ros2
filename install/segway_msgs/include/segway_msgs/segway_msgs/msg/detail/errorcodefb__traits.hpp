// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from segway_msgs:msg/Errorcodefb.idl
// generated code does not contain a copyright notice

#ifndef SEGWAY_MSGS__MSG__DETAIL__ERRORCODEFB__TRAITS_HPP_
#define SEGWAY_MSGS__MSG__DETAIL__ERRORCODEFB__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "segway_msgs/msg/detail/errorcodefb__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace segway_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Errorcodefb & msg,
  std::ostream & out)
{
  out << "{";
  // member: host_error
  {
    out << "host_error: ";
    rosidl_generator_traits::value_to_yaml(msg.host_error, out);
    out << ", ";
  }

  // member: central_error
  {
    out << "central_error: ";
    rosidl_generator_traits::value_to_yaml(msg.central_error, out);
    out << ", ";
  }

  // member: front_left_motor_error
  {
    out << "front_left_motor_error: ";
    rosidl_generator_traits::value_to_yaml(msg.front_left_motor_error, out);
    out << ", ";
  }

  // member: front_right_motor_error
  {
    out << "front_right_motor_error: ";
    rosidl_generator_traits::value_to_yaml(msg.front_right_motor_error, out);
    out << ", ";
  }

  // member: rear_left_motor_error
  {
    out << "rear_left_motor_error: ";
    rosidl_generator_traits::value_to_yaml(msg.rear_left_motor_error, out);
    out << ", ";
  }

  // member: rear_right_motor_error
  {
    out << "rear_right_motor_error: ";
    rosidl_generator_traits::value_to_yaml(msg.rear_right_motor_error, out);
    out << ", ";
  }

  // member: bms_error
  {
    out << "bms_error: ";
    rosidl_generator_traits::value_to_yaml(msg.bms_error, out);
    out << ", ";
  }

  // member: brake_error
  {
    out << "brake_error: ";
    rosidl_generator_traits::value_to_yaml(msg.brake_error, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Errorcodefb & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: host_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "host_error: ";
    rosidl_generator_traits::value_to_yaml(msg.host_error, out);
    out << "\n";
  }

  // member: central_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "central_error: ";
    rosidl_generator_traits::value_to_yaml(msg.central_error, out);
    out << "\n";
  }

  // member: front_left_motor_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "front_left_motor_error: ";
    rosidl_generator_traits::value_to_yaml(msg.front_left_motor_error, out);
    out << "\n";
  }

  // member: front_right_motor_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "front_right_motor_error: ";
    rosidl_generator_traits::value_to_yaml(msg.front_right_motor_error, out);
    out << "\n";
  }

  // member: rear_left_motor_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rear_left_motor_error: ";
    rosidl_generator_traits::value_to_yaml(msg.rear_left_motor_error, out);
    out << "\n";
  }

  // member: rear_right_motor_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rear_right_motor_error: ";
    rosidl_generator_traits::value_to_yaml(msg.rear_right_motor_error, out);
    out << "\n";
  }

  // member: bms_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bms_error: ";
    rosidl_generator_traits::value_to_yaml(msg.bms_error, out);
    out << "\n";
  }

  // member: brake_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "brake_error: ";
    rosidl_generator_traits::value_to_yaml(msg.brake_error, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Errorcodefb & msg, bool use_flow_style = false)
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
  const segway_msgs::msg::Errorcodefb & msg,
  std::ostream & out, size_t indentation = 0)
{
  segway_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use segway_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const segway_msgs::msg::Errorcodefb & msg)
{
  return segway_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<segway_msgs::msg::Errorcodefb>()
{
  return "segway_msgs::msg::Errorcodefb";
}

template<>
inline const char * name<segway_msgs::msg::Errorcodefb>()
{
  return "segway_msgs/msg/Errorcodefb";
}

template<>
struct has_fixed_size<segway_msgs::msg::Errorcodefb>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<segway_msgs::msg::Errorcodefb>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<segway_msgs::msg::Errorcodefb>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SEGWAY_MSGS__MSG__DETAIL__ERRORCODEFB__TRAITS_HPP_
