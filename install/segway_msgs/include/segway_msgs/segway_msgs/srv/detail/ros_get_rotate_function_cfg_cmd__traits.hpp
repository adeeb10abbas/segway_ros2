// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from segway_msgs:srv/RosGetRotateFunctionCfgCmd.idl
// generated code does not contain a copyright notice

#ifndef SEGWAY_MSGS__SRV__DETAIL__ROS_GET_ROTATE_FUNCTION_CFG_CMD__TRAITS_HPP_
#define SEGWAY_MSGS__SRV__DETAIL__ROS_GET_ROTATE_FUNCTION_CFG_CMD__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "segway_msgs/srv/detail/ros_get_rotate_function_cfg_cmd__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace segway_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const RosGetRotateFunctionCfgCmd_Request & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RosGetRotateFunctionCfgCmd_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RosGetRotateFunctionCfgCmd_Request & msg, bool use_flow_style = false)
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
  const segway_msgs::srv::RosGetRotateFunctionCfgCmd_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  segway_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use segway_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const segway_msgs::srv::RosGetRotateFunctionCfgCmd_Request & msg)
{
  return segway_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<segway_msgs::srv::RosGetRotateFunctionCfgCmd_Request>()
{
  return "segway_msgs::srv::RosGetRotateFunctionCfgCmd_Request";
}

template<>
inline const char * name<segway_msgs::srv::RosGetRotateFunctionCfgCmd_Request>()
{
  return "segway_msgs/srv/RosGetRotateFunctionCfgCmd_Request";
}

template<>
struct has_fixed_size<segway_msgs::srv::RosGetRotateFunctionCfgCmd_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<segway_msgs::srv::RosGetRotateFunctionCfgCmd_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<segway_msgs::srv::RosGetRotateFunctionCfgCmd_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace segway_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const RosGetRotateFunctionCfgCmd_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: cfg_insitu_rotation_cmd
  {
    out << "cfg_insitu_rotation_cmd: ";
    rosidl_generator_traits::value_to_yaml(msg.cfg_insitu_rotation_cmd, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RosGetRotateFunctionCfgCmd_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: cfg_insitu_rotation_cmd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cfg_insitu_rotation_cmd: ";
    rosidl_generator_traits::value_to_yaml(msg.cfg_insitu_rotation_cmd, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RosGetRotateFunctionCfgCmd_Response & msg, bool use_flow_style = false)
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
  const segway_msgs::srv::RosGetRotateFunctionCfgCmd_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  segway_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use segway_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const segway_msgs::srv::RosGetRotateFunctionCfgCmd_Response & msg)
{
  return segway_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<segway_msgs::srv::RosGetRotateFunctionCfgCmd_Response>()
{
  return "segway_msgs::srv::RosGetRotateFunctionCfgCmd_Response";
}

template<>
inline const char * name<segway_msgs::srv::RosGetRotateFunctionCfgCmd_Response>()
{
  return "segway_msgs/srv/RosGetRotateFunctionCfgCmd_Response";
}

template<>
struct has_fixed_size<segway_msgs::srv::RosGetRotateFunctionCfgCmd_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<segway_msgs::srv::RosGetRotateFunctionCfgCmd_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<segway_msgs::srv::RosGetRotateFunctionCfgCmd_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<segway_msgs::srv::RosGetRotateFunctionCfgCmd>()
{
  return "segway_msgs::srv::RosGetRotateFunctionCfgCmd";
}

template<>
inline const char * name<segway_msgs::srv::RosGetRotateFunctionCfgCmd>()
{
  return "segway_msgs/srv/RosGetRotateFunctionCfgCmd";
}

template<>
struct has_fixed_size<segway_msgs::srv::RosGetRotateFunctionCfgCmd>
  : std::integral_constant<
    bool,
    has_fixed_size<segway_msgs::srv::RosGetRotateFunctionCfgCmd_Request>::value &&
    has_fixed_size<segway_msgs::srv::RosGetRotateFunctionCfgCmd_Response>::value
  >
{
};

template<>
struct has_bounded_size<segway_msgs::srv::RosGetRotateFunctionCfgCmd>
  : std::integral_constant<
    bool,
    has_bounded_size<segway_msgs::srv::RosGetRotateFunctionCfgCmd_Request>::value &&
    has_bounded_size<segway_msgs::srv::RosGetRotateFunctionCfgCmd_Response>::value
  >
{
};

template<>
struct is_service<segway_msgs::srv::RosGetRotateFunctionCfgCmd>
  : std::true_type
{
};

template<>
struct is_service_request<segway_msgs::srv::RosGetRotateFunctionCfgCmd_Request>
  : std::true_type
{
};

template<>
struct is_service_response<segway_msgs::srv::RosGetRotateFunctionCfgCmd_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // SEGWAY_MSGS__SRV__DETAIL__ROS_GET_ROTATE_FUNCTION_CFG_CMD__TRAITS_HPP_
