// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from segway_msgs:srv/RosClearChassisErrorCodeCmd.idl
// generated code does not contain a copyright notice

#ifndef SEGWAY_MSGS__SRV__DETAIL__ROS_CLEAR_CHASSIS_ERROR_CODE_CMD__TRAITS_HPP_
#define SEGWAY_MSGS__SRV__DETAIL__ROS_CLEAR_CHASSIS_ERROR_CODE_CMD__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "segway_msgs/srv/detail/ros_clear_chassis_error_code_cmd__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace segway_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const RosClearChassisErrorCodeCmd_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: clear_chassiserror_code_cmd
  {
    out << "clear_chassiserror_code_cmd: ";
    rosidl_generator_traits::value_to_yaml(msg.clear_chassiserror_code_cmd, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RosClearChassisErrorCodeCmd_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: clear_chassiserror_code_cmd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "clear_chassiserror_code_cmd: ";
    rosidl_generator_traits::value_to_yaml(msg.clear_chassiserror_code_cmd, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RosClearChassisErrorCodeCmd_Request & msg, bool use_flow_style = false)
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
  const segway_msgs::srv::RosClearChassisErrorCodeCmd_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  segway_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use segway_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const segway_msgs::srv::RosClearChassisErrorCodeCmd_Request & msg)
{
  return segway_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<segway_msgs::srv::RosClearChassisErrorCodeCmd_Request>()
{
  return "segway_msgs::srv::RosClearChassisErrorCodeCmd_Request";
}

template<>
inline const char * name<segway_msgs::srv::RosClearChassisErrorCodeCmd_Request>()
{
  return "segway_msgs/srv/RosClearChassisErrorCodeCmd_Request";
}

template<>
struct has_fixed_size<segway_msgs::srv::RosClearChassisErrorCodeCmd_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<segway_msgs::srv::RosClearChassisErrorCodeCmd_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<segway_msgs::srv::RosClearChassisErrorCodeCmd_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace segway_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const RosClearChassisErrorCodeCmd_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: clear_chassiserror_code_result
  {
    out << "clear_chassiserror_code_result: ";
    rosidl_generator_traits::value_to_yaml(msg.clear_chassiserror_code_result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RosClearChassisErrorCodeCmd_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: clear_chassiserror_code_result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "clear_chassiserror_code_result: ";
    rosidl_generator_traits::value_to_yaml(msg.clear_chassiserror_code_result, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RosClearChassisErrorCodeCmd_Response & msg, bool use_flow_style = false)
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
  const segway_msgs::srv::RosClearChassisErrorCodeCmd_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  segway_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use segway_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const segway_msgs::srv::RosClearChassisErrorCodeCmd_Response & msg)
{
  return segway_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<segway_msgs::srv::RosClearChassisErrorCodeCmd_Response>()
{
  return "segway_msgs::srv::RosClearChassisErrorCodeCmd_Response";
}

template<>
inline const char * name<segway_msgs::srv::RosClearChassisErrorCodeCmd_Response>()
{
  return "segway_msgs/srv/RosClearChassisErrorCodeCmd_Response";
}

template<>
struct has_fixed_size<segway_msgs::srv::RosClearChassisErrorCodeCmd_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<segway_msgs::srv::RosClearChassisErrorCodeCmd_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<segway_msgs::srv::RosClearChassisErrorCodeCmd_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<segway_msgs::srv::RosClearChassisErrorCodeCmd>()
{
  return "segway_msgs::srv::RosClearChassisErrorCodeCmd";
}

template<>
inline const char * name<segway_msgs::srv::RosClearChassisErrorCodeCmd>()
{
  return "segway_msgs/srv/RosClearChassisErrorCodeCmd";
}

template<>
struct has_fixed_size<segway_msgs::srv::RosClearChassisErrorCodeCmd>
  : std::integral_constant<
    bool,
    has_fixed_size<segway_msgs::srv::RosClearChassisErrorCodeCmd_Request>::value &&
    has_fixed_size<segway_msgs::srv::RosClearChassisErrorCodeCmd_Response>::value
  >
{
};

template<>
struct has_bounded_size<segway_msgs::srv::RosClearChassisErrorCodeCmd>
  : std::integral_constant<
    bool,
    has_bounded_size<segway_msgs::srv::RosClearChassisErrorCodeCmd_Request>::value &&
    has_bounded_size<segway_msgs::srv::RosClearChassisErrorCodeCmd_Response>::value
  >
{
};

template<>
struct is_service<segway_msgs::srv::RosClearChassisErrorCodeCmd>
  : std::true_type
{
};

template<>
struct is_service_request<segway_msgs::srv::RosClearChassisErrorCodeCmd_Request>
  : std::true_type
{
};

template<>
struct is_service_response<segway_msgs::srv::RosClearChassisErrorCodeCmd_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // SEGWAY_MSGS__SRV__DETAIL__ROS_CLEAR_CHASSIS_ERROR_CODE_CMD__TRAITS_HPP_
