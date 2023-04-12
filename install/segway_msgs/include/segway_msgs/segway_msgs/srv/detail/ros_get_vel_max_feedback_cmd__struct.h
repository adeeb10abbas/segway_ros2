// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from segway_msgs:srv/RosGetVelMaxFeedbackCmd.idl
// generated code does not contain a copyright notice

#ifndef SEGWAY_MSGS__SRV__DETAIL__ROS_GET_VEL_MAX_FEEDBACK_CMD__STRUCT_H_
#define SEGWAY_MSGS__SRV__DETAIL__ROS_GET_VEL_MAX_FEEDBACK_CMD__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/RosGetVelMaxFeedbackCmd in the package segway_msgs.
typedef struct segway_msgs__srv__RosGetVelMaxFeedbackCmd_Request
{
  bool ros_getvel_max_fbcmd;
} segway_msgs__srv__RosGetVelMaxFeedbackCmd_Request;

// Struct for a sequence of segway_msgs__srv__RosGetVelMaxFeedbackCmd_Request.
typedef struct segway_msgs__srv__RosGetVelMaxFeedbackCmd_Request__Sequence
{
  segway_msgs__srv__RosGetVelMaxFeedbackCmd_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} segway_msgs__srv__RosGetVelMaxFeedbackCmd_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/RosGetVelMaxFeedbackCmd in the package segway_msgs.
typedef struct segway_msgs__srv__RosGetVelMaxFeedbackCmd_Response
{
  uint16_t forward_maxvel_fb;
  uint16_t backward_maxvel_fb;
  uint16_t angular_maxvel_fb;
} segway_msgs__srv__RosGetVelMaxFeedbackCmd_Response;

// Struct for a sequence of segway_msgs__srv__RosGetVelMaxFeedbackCmd_Response.
typedef struct segway_msgs__srv__RosGetVelMaxFeedbackCmd_Response__Sequence
{
  segway_msgs__srv__RosGetVelMaxFeedbackCmd_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} segway_msgs__srv__RosGetVelMaxFeedbackCmd_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SEGWAY_MSGS__SRV__DETAIL__ROS_GET_VEL_MAX_FEEDBACK_CMD__STRUCT_H_
