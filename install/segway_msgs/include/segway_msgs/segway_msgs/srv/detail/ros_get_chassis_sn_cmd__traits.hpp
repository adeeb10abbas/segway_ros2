// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from segway_msgs:srv/RosGetChassisSnCmd.idl
// generated code does not contain a copyright notice

#ifndef SEGWAY_MSGS__SRV__DETAIL__ROS_GET_CHASSIS_SN_CMD__TRAITS_HPP_
#define SEGWAY_MSGS__SRV__DETAIL__ROS_GET_CHASSIS_SN_CMD__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "segway_msgs/srv/detail/ros_get_chassis_sn_cmd__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace segway_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const RosGetChassisSnCmd_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: ros_getchassis_sn
  {
    out << "ros_getchassis_sn: ";
    rosidl_generator_traits::value_to_yaml(msg.ros_getchassis_sn, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RosGetChassisSnCmd_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: ros_getchassis_sn
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ros_getchassis_sn: ";
    rosidl_generator_traits::value_to_yaml(msg.ros_getchassis_sn, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RosGetChassisSnCmd_Request & msg, bool use_flow_style = false)
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
  const segway_msgs::srv::RosGetChassisSnCmd_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  segway_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use segway_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const segway_msgs::srv::RosGetChassisSnCmd_Request & msg)
{
  return segway_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<segway_msgs::srv::RosGetChassisSnCmd_Request>()
{
  return "segway_msgs::srv::RosGetChassisSnCmd_Request";
}

template<>
inline const char * name<segway_msgs::srv::RosGetChassisSnCmd_Request>()
{
  return "segway_msgs/srv/RosGetChassisSnCmd_Request";
}

template<>
struct has_fixed_size<segway_msgs::srv::RosGetChassisSnCmd_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<segway_msgs::srv::RosGetChassisSnCmd_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<segway_msgs::srv::RosGetChassisSnCmd_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace segway_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const RosGetChassisSnCmd_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: chassis_sn
  {
    out << "chassis_sn: ";
    rosidl_generator_traits::value_to_yaml(msg.chassis_sn, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RosGetChassisSnCmd_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: chassis_sn
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "chassis_sn: ";
    rosidl_generator_traits::value_to_yaml(msg.chassis_sn, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RosGetChassisSnCmd_Response & msg, bool use_flow_style = false)
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
  const segway_msgs::srv::RosGetChassisSnCmd_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  segway_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use segway_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const segway_msgs::srv::RosGetChassisSnCmd_Response & msg)
{
  return segway_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<segway_msgs::srv::RosGetChassisSnCmd_Response>()
{
  return "segway_msgs::srv::RosGetChassisSnCmd_Response";
}

template<>
inline const char * name<segway_msgs::srv::RosGetChassisSnCmd_Response>()
{
  return "segway_msgs/srv/RosGetChassisSnCmd_Response";
}

template<>
struct has_fixed_size<segway_msgs::srv::RosGetChassisSnCmd_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<segway_msgs::srv::RosGetChassisSnCmd_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<segway_msgs::srv::RosGetChassisSnCmd_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<segway_msgs::srv::RosGetChassisSnCmd>()
{
  return "segway_msgs::srv::RosGetChassisSnCmd";
}

template<>
inline const char * name<segway_msgs::srv::RosGetChassisSnCmd>()
{
  return "segway_msgs/srv/RosGetChassisSnCmd";
}

template<>
struct has_fixed_size<segway_msgs::srv::RosGetChassisSnCmd>
  : std::integral_constant<
    bool,
    has_fixed_size<segway_msgs::srv::RosGetChassisSnCmd_Request>::value &&
    has_fixed_size<segway_msgs::srv::RosGetChassisSnCmd_Response>::value
  >
{
};

template<>
struct has_bounded_size<segway_msgs::srv::RosGetChassisSnCmd>
  : std::integral_constant<
    bool,
    has_bounded_size<segway_msgs::srv::RosGetChassisSnCmd_Request>::value &&
    has_bounded_size<segway_msgs::srv::RosGetChassisSnCmd_Response>::value
  >
{
};

template<>
struct is_service<segway_msgs::srv::RosGetChassisSnCmd>
  : std::true_type
{
};

template<>
struct is_service_request<segway_msgs::srv::RosGetChassisSnCmd_Request>
  : std::true_type
{
};

template<>
struct is_service_response<segway_msgs::srv::RosGetChassisSnCmd_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // SEGWAY_MSGS__SRV__DETAIL__ROS_GET_CHASSIS_SN_CMD__TRAITS_HPP_
