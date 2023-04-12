// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from segway_msgs:msg/Errorcodefb.idl
// generated code does not contain a copyright notice

#ifndef SEGWAY_MSGS__MSG__DETAIL__ERRORCODEFB__STRUCT_H_
#define SEGWAY_MSGS__MSG__DETAIL__ERRORCODEFB__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Errorcodefb in the package segway_msgs.
typedef struct segway_msgs__msg__Errorcodefb
{
  uint32_t host_error;
  uint32_t central_error;
  uint32_t front_left_motor_error;
  uint32_t front_right_motor_error;
  uint32_t rear_left_motor_error;
  uint32_t rear_right_motor_error;
  uint32_t bms_error;
  uint32_t brake_error;
} segway_msgs__msg__Errorcodefb;

// Struct for a sequence of segway_msgs__msg__Errorcodefb.
typedef struct segway_msgs__msg__Errorcodefb__Sequence
{
  segway_msgs__msg__Errorcodefb * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} segway_msgs__msg__Errorcodefb__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SEGWAY_MSGS__MSG__DETAIL__ERRORCODEFB__STRUCT_H_
