// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from segway_msgs:srv/RosSetVelMaxCmd.idl
// generated code does not contain a copyright notice

#ifndef SEGWAY_MSGS__SRV__DETAIL__ROS_SET_VEL_MAX_CMD__STRUCT_H_
#define SEGWAY_MSGS__SRV__DETAIL__ROS_SET_VEL_MAX_CMD__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/RosSetVelMaxCmd in the package segway_msgs.
typedef struct segway_msgs__srv__RosSetVelMaxCmd_Request
{
  double ros_setforward_max_vel;
  double ros_setbackward_max_vel;
  double ros_setangular_max_vel;
} segway_msgs__srv__RosSetVelMaxCmd_Request;

// Struct for a sequence of segway_msgs__srv__RosSetVelMaxCmd_Request.
typedef struct segway_msgs__srv__RosSetVelMaxCmd_Request__Sequence
{
  segway_msgs__srv__RosSetVelMaxCmd_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} segway_msgs__srv__RosSetVelMaxCmd_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/RosSetVelMaxCmd in the package segway_msgs.
typedef struct segway_msgs__srv__RosSetVelMaxCmd_Response
{
  uint8_t chassis_setmax_vel_result;
} segway_msgs__srv__RosSetVelMaxCmd_Response;

// Struct for a sequence of segway_msgs__srv__RosSetVelMaxCmd_Response.
typedef struct segway_msgs__srv__RosSetVelMaxCmd_Response__Sequence
{
  segway_msgs__srv__RosSetVelMaxCmd_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} segway_msgs__srv__RosSetVelMaxCmd_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SEGWAY_MSGS__SRV__DETAIL__ROS_SET_VEL_MAX_CMD__STRUCT_H_
