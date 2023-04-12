// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from segway_msgs:srv/ChassisSendEvent.idl
// generated code does not contain a copyright notice

#ifndef SEGWAY_MSGS__SRV__DETAIL__CHASSIS_SEND_EVENT__STRUCT_H_
#define SEGWAY_MSGS__SRV__DETAIL__CHASSIS_SEND_EVENT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/ChassisSendEvent in the package segway_msgs.
typedef struct segway_msgs__srv__ChassisSendEvent_Request
{
  int16_t chassis_sendevent_id;
} segway_msgs__srv__ChassisSendEvent_Request;

// Struct for a sequence of segway_msgs__srv__ChassisSendEvent_Request.
typedef struct segway_msgs__srv__ChassisSendEvent_Request__Sequence
{
  segway_msgs__srv__ChassisSendEvent_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} segway_msgs__srv__ChassisSendEvent_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/ChassisSendEvent in the package segway_msgs.
typedef struct segway_msgs__srv__ChassisSendEvent_Response
{
  bool ros_isreceived;
} segway_msgs__srv__ChassisSendEvent_Response;

// Struct for a sequence of segway_msgs__srv__ChassisSendEvent_Response.
typedef struct segway_msgs__srv__ChassisSendEvent_Response__Sequence
{
  segway_msgs__srv__ChassisSendEvent_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} segway_msgs__srv__ChassisSendEvent_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SEGWAY_MSGS__SRV__DETAIL__CHASSIS_SEND_EVENT__STRUCT_H_
