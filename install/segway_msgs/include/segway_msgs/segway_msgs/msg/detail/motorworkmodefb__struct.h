// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from segway_msgs:msg/Motorworkmodefb.idl
// generated code does not contain a copyright notice

#ifndef SEGWAY_MSGS__MSG__DETAIL__MOTORWORKMODEFB__STRUCT_H_
#define SEGWAY_MSGS__MSG__DETAIL__MOTORWORKMODEFB__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Motorworkmodefb in the package segway_msgs.
typedef struct segway_msgs__msg__Motorworkmodefb
{
  /// 0: no output torque 1: output torque
  uint16_t motor_work_mode;
} segway_msgs__msg__Motorworkmodefb;

// Struct for a sequence of segway_msgs__msg__Motorworkmodefb.
typedef struct segway_msgs__msg__Motorworkmodefb__Sequence
{
  segway_msgs__msg__Motorworkmodefb * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} segway_msgs__msg__Motorworkmodefb__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SEGWAY_MSGS__MSG__DETAIL__MOTORWORKMODEFB__STRUCT_H_
