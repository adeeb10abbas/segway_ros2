// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from segway_msgs:srv/RosGetHostAndChassisMatchCmd.idl
// generated code does not contain a copyright notice

#ifndef SEGWAY_MSGS__SRV__DETAIL__ROS_GET_HOST_AND_CHASSIS_MATCH_CMD__TRAITS_HPP_
#define SEGWAY_MSGS__SRV__DETAIL__ROS_GET_HOST_AND_CHASSIS_MATCH_CMD__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "segway_msgs/srv/detail/ros_get_host_and_chassis_match_cmd__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace segway_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const RosGetHostAndChassisMatchCmd_Request & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RosGetHostAndChassisMatchCmd_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RosGetHostAndChassisMatchCmd_Request & msg, bool use_flow_style = false)
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
  const segway_msgs::srv::RosGetHostAndChassisMatchCmd_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  segway_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use segway_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const segway_msgs::srv::RosGetHostAndChassisMatchCmd_Request & msg)
{
  return segway_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<segway_msgs::srv::RosGetHostAndChassisMatchCmd_Request>()
{
  return "segway_msgs::srv::RosGetHostAndChassisMatchCmd_Request";
}

template<>
inline const char * name<segway_msgs::srv::RosGetHostAndChassisMatchCmd_Request>()
{
  return "segway_msgs/srv/RosGetHostAndChassisMatchCmd_Request";
}

template<>
struct has_fixed_size<segway_msgs::srv::RosGetHostAndChassisMatchCmd_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<segway_msgs::srv::RosGetHostAndChassisMatchCmd_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<segway_msgs::srv::RosGetHostAndChassisMatchCmd_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace segway_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const RosGetHostAndChassisMatchCmd_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: is_matchedwith_firmware
  {
    out << "is_matchedwith_firmware: ";
    rosidl_generator_traits::value_to_yaml(msg.is_matchedwith_firmware, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RosGetHostAndChassisMatchCmd_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: is_matchedwith_firmware
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_matchedwith_firmware: ";
    rosidl_generator_traits::value_to_yaml(msg.is_matchedwith_firmware, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RosGetHostAndChassisMatchCmd_Response & msg, bool use_flow_style = false)
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
  const segway_msgs::srv::RosGetHostAndChassisMatchCmd_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  segway_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use segway_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const segway_msgs::srv::RosGetHostAndChassisMatchCmd_Response & msg)
{
  return segway_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<segway_msgs::srv::RosGetHostAndChassisMatchCmd_Response>()
{
  return "segway_msgs::srv::RosGetHostAndChassisMatchCmd_Response";
}

template<>
inline const char * name<segway_msgs::srv::RosGetHostAndChassisMatchCmd_Response>()
{
  return "segway_msgs/srv/RosGetHostAndChassisMatchCmd_Response";
}

template<>
struct has_fixed_size<segway_msgs::srv::RosGetHostAndChassisMatchCmd_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<segway_msgs::srv::RosGetHostAndChassisMatchCmd_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<segway_msgs::srv::RosGetHostAndChassisMatchCmd_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<segway_msgs::srv::RosGetHostAndChassisMatchCmd>()
{
  return "segway_msgs::srv::RosGetHostAndChassisMatchCmd";
}

template<>
inline const char * name<segway_msgs::srv::RosGetHostAndChassisMatchCmd>()
{
  return "segway_msgs/srv/RosGetHostAndChassisMatchCmd";
}

template<>
struct has_fixed_size<segway_msgs::srv::RosGetHostAndChassisMatchCmd>
  : std::integral_constant<
    bool,
    has_fixed_size<segway_msgs::srv::RosGetHostAndChassisMatchCmd_Request>::value &&
    has_fixed_size<segway_msgs::srv::RosGetHostAndChassisMatchCmd_Response>::value
  >
{
};

template<>
struct has_bounded_size<segway_msgs::srv::RosGetHostAndChassisMatchCmd>
  : std::integral_constant<
    bool,
    has_bounded_size<segway_msgs::srv::RosGetHostAndChassisMatchCmd_Request>::value &&
    has_bounded_size<segway_msgs::srv::RosGetHostAndChassisMatchCmd_Response>::value
  >
{
};

template<>
struct is_service<segway_msgs::srv::RosGetHostAndChassisMatchCmd>
  : std::true_type
{
};

template<>
struct is_service_request<segway_msgs::srv::RosGetHostAndChassisMatchCmd_Request>
  : std::true_type
{
};

template<>
struct is_service_response<segway_msgs::srv::RosGetHostAndChassisMatchCmd_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // SEGWAY_MSGS__SRV__DETAIL__ROS_GET_HOST_AND_CHASSIS_MATCH_CMD__TRAITS_HPP_
