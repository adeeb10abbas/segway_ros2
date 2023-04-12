// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from segway_msgs:msg/Bmsfb.idl
// generated code does not contain a copyright notice

#ifndef SEGWAY_MSGS__MSG__DETAIL__BMSFB__TRAITS_HPP_
#define SEGWAY_MSGS__MSG__DETAIL__BMSFB__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "segway_msgs/msg/detail/bmsfb__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace segway_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Bmsfb & msg,
  std::ostream & out)
{
  out << "{";
  // member: bat_soc
  {
    out << "bat_soc: ";
    rosidl_generator_traits::value_to_yaml(msg.bat_soc, out);
    out << ", ";
  }

  // member: bat_charging
  {
    out << "bat_charging: ";
    rosidl_generator_traits::value_to_yaml(msg.bat_charging, out);
    out << ", ";
  }

  // member: bat_vol
  {
    out << "bat_vol: ";
    rosidl_generator_traits::value_to_yaml(msg.bat_vol, out);
    out << ", ";
  }

  // member: bat_current
  {
    out << "bat_current: ";
    rosidl_generator_traits::value_to_yaml(msg.bat_current, out);
    out << ", ";
  }

  // member: bat_temp
  {
    out << "bat_temp: ";
    rosidl_generator_traits::value_to_yaml(msg.bat_temp, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Bmsfb & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: bat_soc
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bat_soc: ";
    rosidl_generator_traits::value_to_yaml(msg.bat_soc, out);
    out << "\n";
  }

  // member: bat_charging
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bat_charging: ";
    rosidl_generator_traits::value_to_yaml(msg.bat_charging, out);
    out << "\n";
  }

  // member: bat_vol
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bat_vol: ";
    rosidl_generator_traits::value_to_yaml(msg.bat_vol, out);
    out << "\n";
  }

  // member: bat_current
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bat_current: ";
    rosidl_generator_traits::value_to_yaml(msg.bat_current, out);
    out << "\n";
  }

  // member: bat_temp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bat_temp: ";
    rosidl_generator_traits::value_to_yaml(msg.bat_temp, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Bmsfb & msg, bool use_flow_style = false)
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
  const segway_msgs::msg::Bmsfb & msg,
  std::ostream & out, size_t indentation = 0)
{
  segway_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use segway_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const segway_msgs::msg::Bmsfb & msg)
{
  return segway_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<segway_msgs::msg::Bmsfb>()
{
  return "segway_msgs::msg::Bmsfb";
}

template<>
inline const char * name<segway_msgs::msg::Bmsfb>()
{
  return "segway_msgs/msg/Bmsfb";
}

template<>
struct has_fixed_size<segway_msgs::msg::Bmsfb>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<segway_msgs::msg::Bmsfb>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<segway_msgs::msg::Bmsfb>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SEGWAY_MSGS__MSG__DETAIL__BMSFB__TRAITS_HPP_
