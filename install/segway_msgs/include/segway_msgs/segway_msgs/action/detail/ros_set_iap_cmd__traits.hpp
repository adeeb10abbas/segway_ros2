// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from segway_msgs:action/RosSetIapCmd.idl
// generated code does not contain a copyright notice

#ifndef SEGWAY_MSGS__ACTION__DETAIL__ROS_SET_IAP_CMD__TRAITS_HPP_
#define SEGWAY_MSGS__ACTION__DETAIL__ROS_SET_IAP_CMD__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "segway_msgs/action/detail/ros_set_iap_cmd__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace segway_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const RosSetIapCmd_Goal & msg,
  std::ostream & out)
{
  out << "{";
  // member: board_index_for_iap
  {
    out << "board_index_for_iap: ";
    rosidl_generator_traits::value_to_yaml(msg.board_index_for_iap, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RosSetIapCmd_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: board_index_for_iap
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "board_index_for_iap: ";
    rosidl_generator_traits::value_to_yaml(msg.board_index_for_iap, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RosSetIapCmd_Goal & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace segway_msgs

namespace rosidl_generator_traits
{

[[deprecated("use segway_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const segway_msgs::action::RosSetIapCmd_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  segway_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use segway_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const segway_msgs::action::RosSetIapCmd_Goal & msg)
{
  return segway_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<segway_msgs::action::RosSetIapCmd_Goal>()
{
  return "segway_msgs::action::RosSetIapCmd_Goal";
}

template<>
inline const char * name<segway_msgs::action::RosSetIapCmd_Goal>()
{
  return "segway_msgs/action/RosSetIapCmd_Goal";
}

template<>
struct has_fixed_size<segway_msgs::action::RosSetIapCmd_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<segway_msgs::action::RosSetIapCmd_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<segway_msgs::action::RosSetIapCmd_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace segway_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const RosSetIapCmd_Result & msg,
  std::ostream & out)
{
  out << "{";
  // member: iap_result
  {
    out << "iap_result: ";
    rosidl_generator_traits::value_to_yaml(msg.iap_result, out);
    out << ", ";
  }

  // member: error_code
  {
    out << "error_code: ";
    rosidl_generator_traits::value_to_yaml(msg.error_code, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RosSetIapCmd_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: iap_result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "iap_result: ";
    rosidl_generator_traits::value_to_yaml(msg.iap_result, out);
    out << "\n";
  }

  // member: error_code
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "error_code: ";
    rosidl_generator_traits::value_to_yaml(msg.error_code, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RosSetIapCmd_Result & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace segway_msgs

namespace rosidl_generator_traits
{

[[deprecated("use segway_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const segway_msgs::action::RosSetIapCmd_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  segway_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use segway_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const segway_msgs::action::RosSetIapCmd_Result & msg)
{
  return segway_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<segway_msgs::action::RosSetIapCmd_Result>()
{
  return "segway_msgs::action::RosSetIapCmd_Result";
}

template<>
inline const char * name<segway_msgs::action::RosSetIapCmd_Result>()
{
  return "segway_msgs/action/RosSetIapCmd_Result";
}

template<>
struct has_fixed_size<segway_msgs::action::RosSetIapCmd_Result>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<segway_msgs::action::RosSetIapCmd_Result>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<segway_msgs::action::RosSetIapCmd_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace segway_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const RosSetIapCmd_Feedback & msg,
  std::ostream & out)
{
  out << "{";
  // member: iap_percent
  {
    out << "iap_percent: ";
    rosidl_generator_traits::value_to_yaml(msg.iap_percent, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RosSetIapCmd_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: iap_percent
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "iap_percent: ";
    rosidl_generator_traits::value_to_yaml(msg.iap_percent, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RosSetIapCmd_Feedback & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace segway_msgs

namespace rosidl_generator_traits
{

[[deprecated("use segway_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const segway_msgs::action::RosSetIapCmd_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  segway_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use segway_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const segway_msgs::action::RosSetIapCmd_Feedback & msg)
{
  return segway_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<segway_msgs::action::RosSetIapCmd_Feedback>()
{
  return "segway_msgs::action::RosSetIapCmd_Feedback";
}

template<>
inline const char * name<segway_msgs::action::RosSetIapCmd_Feedback>()
{
  return "segway_msgs/action/RosSetIapCmd_Feedback";
}

template<>
struct has_fixed_size<segway_msgs::action::RosSetIapCmd_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<segway_msgs::action::RosSetIapCmd_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<segway_msgs::action::RosSetIapCmd_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "segway_msgs/action/detail/ros_set_iap_cmd__traits.hpp"

namespace segway_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const RosSetIapCmd_SendGoal_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: goal
  {
    out << "goal: ";
    to_flow_style_yaml(msg.goal, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RosSetIapCmd_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: goal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal:\n";
    to_block_style_yaml(msg.goal, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RosSetIapCmd_SendGoal_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace segway_msgs

namespace rosidl_generator_traits
{

[[deprecated("use segway_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const segway_msgs::action::RosSetIapCmd_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  segway_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use segway_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const segway_msgs::action::RosSetIapCmd_SendGoal_Request & msg)
{
  return segway_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<segway_msgs::action::RosSetIapCmd_SendGoal_Request>()
{
  return "segway_msgs::action::RosSetIapCmd_SendGoal_Request";
}

template<>
inline const char * name<segway_msgs::action::RosSetIapCmd_SendGoal_Request>()
{
  return "segway_msgs/action/RosSetIapCmd_SendGoal_Request";
}

template<>
struct has_fixed_size<segway_msgs::action::RosSetIapCmd_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<segway_msgs::action::RosSetIapCmd_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<segway_msgs::action::RosSetIapCmd_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<segway_msgs::action::RosSetIapCmd_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<segway_msgs::action::RosSetIapCmd_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace segway_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const RosSetIapCmd_SendGoal_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: accepted
  {
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << ", ";
  }

  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RosSetIapCmd_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: accepted
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << "\n";
  }

  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_block_style_yaml(msg.stamp, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RosSetIapCmd_SendGoal_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace segway_msgs

namespace rosidl_generator_traits
{

[[deprecated("use segway_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const segway_msgs::action::RosSetIapCmd_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  segway_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use segway_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const segway_msgs::action::RosSetIapCmd_SendGoal_Response & msg)
{
  return segway_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<segway_msgs::action::RosSetIapCmd_SendGoal_Response>()
{
  return "segway_msgs::action::RosSetIapCmd_SendGoal_Response";
}

template<>
inline const char * name<segway_msgs::action::RosSetIapCmd_SendGoal_Response>()
{
  return "segway_msgs/action/RosSetIapCmd_SendGoal_Response";
}

template<>
struct has_fixed_size<segway_msgs::action::RosSetIapCmd_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<segway_msgs::action::RosSetIapCmd_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<segway_msgs::action::RosSetIapCmd_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<segway_msgs::action::RosSetIapCmd_SendGoal>()
{
  return "segway_msgs::action::RosSetIapCmd_SendGoal";
}

template<>
inline const char * name<segway_msgs::action::RosSetIapCmd_SendGoal>()
{
  return "segway_msgs/action/RosSetIapCmd_SendGoal";
}

template<>
struct has_fixed_size<segway_msgs::action::RosSetIapCmd_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<segway_msgs::action::RosSetIapCmd_SendGoal_Request>::value &&
    has_fixed_size<segway_msgs::action::RosSetIapCmd_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<segway_msgs::action::RosSetIapCmd_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<segway_msgs::action::RosSetIapCmd_SendGoal_Request>::value &&
    has_bounded_size<segway_msgs::action::RosSetIapCmd_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<segway_msgs::action::RosSetIapCmd_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<segway_msgs::action::RosSetIapCmd_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<segway_msgs::action::RosSetIapCmd_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace segway_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const RosSetIapCmd_GetResult_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RosSetIapCmd_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RosSetIapCmd_GetResult_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace segway_msgs

namespace rosidl_generator_traits
{

[[deprecated("use segway_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const segway_msgs::action::RosSetIapCmd_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  segway_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use segway_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const segway_msgs::action::RosSetIapCmd_GetResult_Request & msg)
{
  return segway_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<segway_msgs::action::RosSetIapCmd_GetResult_Request>()
{
  return "segway_msgs::action::RosSetIapCmd_GetResult_Request";
}

template<>
inline const char * name<segway_msgs::action::RosSetIapCmd_GetResult_Request>()
{
  return "segway_msgs/action/RosSetIapCmd_GetResult_Request";
}

template<>
struct has_fixed_size<segway_msgs::action::RosSetIapCmd_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<segway_msgs::action::RosSetIapCmd_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<segway_msgs::action::RosSetIapCmd_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "segway_msgs/action/detail/ros_set_iap_cmd__traits.hpp"

namespace segway_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const RosSetIapCmd_GetResult_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: result
  {
    out << "result: ";
    to_flow_style_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RosSetIapCmd_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result:\n";
    to_block_style_yaml(msg.result, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RosSetIapCmd_GetResult_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace segway_msgs

namespace rosidl_generator_traits
{

[[deprecated("use segway_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const segway_msgs::action::RosSetIapCmd_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  segway_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use segway_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const segway_msgs::action::RosSetIapCmd_GetResult_Response & msg)
{
  return segway_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<segway_msgs::action::RosSetIapCmd_GetResult_Response>()
{
  return "segway_msgs::action::RosSetIapCmd_GetResult_Response";
}

template<>
inline const char * name<segway_msgs::action::RosSetIapCmd_GetResult_Response>()
{
  return "segway_msgs/action/RosSetIapCmd_GetResult_Response";
}

template<>
struct has_fixed_size<segway_msgs::action::RosSetIapCmd_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<segway_msgs::action::RosSetIapCmd_Result>::value> {};

template<>
struct has_bounded_size<segway_msgs::action::RosSetIapCmd_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<segway_msgs::action::RosSetIapCmd_Result>::value> {};

template<>
struct is_message<segway_msgs::action::RosSetIapCmd_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<segway_msgs::action::RosSetIapCmd_GetResult>()
{
  return "segway_msgs::action::RosSetIapCmd_GetResult";
}

template<>
inline const char * name<segway_msgs::action::RosSetIapCmd_GetResult>()
{
  return "segway_msgs/action/RosSetIapCmd_GetResult";
}

template<>
struct has_fixed_size<segway_msgs::action::RosSetIapCmd_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<segway_msgs::action::RosSetIapCmd_GetResult_Request>::value &&
    has_fixed_size<segway_msgs::action::RosSetIapCmd_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<segway_msgs::action::RosSetIapCmd_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<segway_msgs::action::RosSetIapCmd_GetResult_Request>::value &&
    has_bounded_size<segway_msgs::action::RosSetIapCmd_GetResult_Response>::value
  >
{
};

template<>
struct is_service<segway_msgs::action::RosSetIapCmd_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<segway_msgs::action::RosSetIapCmd_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<segway_msgs::action::RosSetIapCmd_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "segway_msgs/action/detail/ros_set_iap_cmd__traits.hpp"

namespace segway_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const RosSetIapCmd_FeedbackMessage & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: feedback
  {
    out << "feedback: ";
    to_flow_style_yaml(msg.feedback, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RosSetIapCmd_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feedback:\n";
    to_block_style_yaml(msg.feedback, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RosSetIapCmd_FeedbackMessage & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace segway_msgs

namespace rosidl_generator_traits
{

[[deprecated("use segway_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const segway_msgs::action::RosSetIapCmd_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  segway_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use segway_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const segway_msgs::action::RosSetIapCmd_FeedbackMessage & msg)
{
  return segway_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<segway_msgs::action::RosSetIapCmd_FeedbackMessage>()
{
  return "segway_msgs::action::RosSetIapCmd_FeedbackMessage";
}

template<>
inline const char * name<segway_msgs::action::RosSetIapCmd_FeedbackMessage>()
{
  return "segway_msgs/action/RosSetIapCmd_FeedbackMessage";
}

template<>
struct has_fixed_size<segway_msgs::action::RosSetIapCmd_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<segway_msgs::action::RosSetIapCmd_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<segway_msgs::action::RosSetIapCmd_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<segway_msgs::action::RosSetIapCmd_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<segway_msgs::action::RosSetIapCmd_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<segway_msgs::action::RosSetIapCmd>
  : std::true_type
{
};

template<>
struct is_action_goal<segway_msgs::action::RosSetIapCmd_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<segway_msgs::action::RosSetIapCmd_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<segway_msgs::action::RosSetIapCmd_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // SEGWAY_MSGS__ACTION__DETAIL__ROS_SET_IAP_CMD__TRAITS_HPP_
