// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from segway_msgs:srv/RosResetHostPowerCmd.idl
// generated code does not contain a copyright notice

#ifndef SEGWAY_MSGS__SRV__DETAIL__ROS_RESET_HOST_POWER_CMD__TRAITS_HPP_
#define SEGWAY_MSGS__SRV__DETAIL__ROS_RESET_HOST_POWER_CMD__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "segway_msgs/srv/detail/ros_reset_host_power_cmd__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace segway_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const RosResetHostPowerCmd_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: reset_intervaltime
  {
    out << "reset_intervaltime: ";
    rosidl_generator_traits::value_to_yaml(msg.reset_intervaltime, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RosResetHostPowerCmd_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: reset_intervaltime
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reset_intervaltime: ";
    rosidl_generator_traits::value_to_yaml(msg.reset_intervaltime, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RosResetHostPowerCmd_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace segway_msgs

namespace rosidl_generator_traits
{

[[deprecated("use segway_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const segway_msgs::srv::RosResetHostPowerCmd_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  segway_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use segway_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const segway_msgs::srv::RosResetHostPowerCmd_Request & msg)
{
  return segway_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<segway_msgs::srv::RosResetHostPowerCmd_Request>()
{
  return "segway_msgs::srv::RosResetHostPowerCmd_Request";
}

template<>
inline const char * name<segway_msgs::srv::RosResetHostPowerCmd_Request>()
{
  return "segway_msgs/srv/RosResetHostPowerCmd_Request";
}

template<>
struct has_fixed_size<segway_msgs::srv::RosResetHostPowerCmd_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<segway_msgs::srv::RosResetHostPowerCmd_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<segway_msgs::srv::RosResetHostPowerCmd_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace segway_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const RosResetHostPowerCmd_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: reset_result
  {
    out << "reset_result: ";
    rosidl_generator_traits::value_to_yaml(msg.reset_result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RosResetHostPowerCmd_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: reset_result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reset_result: ";
    rosidl_generator_traits::value_to_yaml(msg.reset_result, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RosResetHostPowerCmd_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace segway_msgs

namespace rosidl_generator_traits
{

[[deprecated("use segway_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const segway_msgs::srv::RosResetHostPowerCmd_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  segway_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use segway_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const segway_msgs::srv::RosResetHostPowerCmd_Response & msg)
{
  return segway_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<segway_msgs::srv::RosResetHostPowerCmd_Response>()
{
  return "segway_msgs::srv::RosResetHostPowerCmd_Response";
}

template<>
inline const char * name<segway_msgs::srv::RosResetHostPowerCmd_Response>()
{
  return "segway_msgs/srv/RosResetHostPowerCmd_Response";
}

template<>
struct has_fixed_size<segway_msgs::srv::RosResetHostPowerCmd_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<segway_msgs::srv::RosResetHostPowerCmd_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<segway_msgs::srv::RosResetHostPowerCmd_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<segway_msgs::srv::RosResetHostPowerCmd>()
{
  return "segway_msgs::srv::RosResetHostPowerCmd";
}

template<>
inline const char * name<segway_msgs::srv::RosResetHostPowerCmd>()
{
  return "segway_msgs/srv/RosResetHostPowerCmd";
}

template<>
struct has_fixed_size<segway_msgs::srv::RosResetHostPowerCmd>
  : std::integral_constant<
    bool,
    has_fixed_size<segway_msgs::srv::RosResetHostPowerCmd_Request>::value &&
    has_fixed_size<segway_msgs::srv::RosResetHostPowerCmd_Response>::value
  >
{
};

template<>
struct has_bounded_size<segway_msgs::srv::RosResetHostPowerCmd>
  : std::integral_constant<
    bool,
    has_bounded_size<segway_msgs::srv::RosResetHostPowerCmd_Request>::value &&
    has_bounded_size<segway_msgs::srv::RosResetHostPowerCmd_Response>::value
  >
{
};

template<>
struct is_service<segway_msgs::srv::RosResetHostPowerCmd>
  : std::true_type
{
};

template<>
struct is_service_request<segway_msgs::srv::RosResetHostPowerCmd_Request>
  : std::true_type
{
};

template<>
struct is_service_response<segway_msgs::srv::RosResetHostPowerCmd_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // SEGWAY_MSGS__SRV__DETAIL__ROS_RESET_HOST_POWER_CMD__TRAITS_HPP_
