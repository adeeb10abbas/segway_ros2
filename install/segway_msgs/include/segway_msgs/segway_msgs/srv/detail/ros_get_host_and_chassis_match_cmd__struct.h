// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from segway_msgs:srv/RosGetHostAndChassisMatchCmd.idl
// generated code does not contain a copyright notice

#ifndef SEGWAY_MSGS__SRV__DETAIL__ROS_GET_HOST_AND_CHASSIS_MATCH_CMD__STRUCT_H_
#define SEGWAY_MSGS__SRV__DETAIL__ROS_GET_HOST_AND_CHASSIS_MATCH_CMD__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/RosGetHostAndChassisMatchCmd in the package segway_msgs.
typedef struct segway_msgs__srv__RosGetHostAndChassisMatchCmd_Request
{
  uint8_t structure_needs_at_least_one_member;
} segway_msgs__srv__RosGetHostAndChassisMatchCmd_Request;

// Struct for a sequence of segway_msgs__srv__RosGetHostAndChassisMatchCmd_Request.
typedef struct segway_msgs__srv__RosGetHostAndChassisMatchCmd_Request__Sequence
{
  segway_msgs__srv__RosGetHostAndChassisMatchCmd_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} segway_msgs__srv__RosGetHostAndChassisMatchCmd_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/RosGetHostAndChassisMatchCmd in the package segway_msgs.
typedef struct segway_msgs__srv__RosGetHostAndChassisMatchCmd_Response
{
  /// 0:matched; 1:chassis version older; 2:host version older; 0xffff:get chassis versin overtime
  uint8_t is_matchedwith_firmware;
} segway_msgs__srv__RosGetHostAndChassisMatchCmd_Response;

// Struct for a sequence of segway_msgs__srv__RosGetHostAndChassisMatchCmd_Response.
typedef struct segway_msgs__srv__RosGetHostAndChassisMatchCmd_Response__Sequence
{
  segway_msgs__srv__RosGetHostAndChassisMatchCmd_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} segway_msgs__srv__RosGetHostAndChassisMatchCmd_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SEGWAY_MSGS__SRV__DETAIL__ROS_GET_HOST_AND_CHASSIS_MATCH_CMD__STRUCT_H_
