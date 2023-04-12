// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from segway_msgs:msg/Chassismileagemeterfb.idl
// generated code does not contain a copyright notice

#ifndef SEGWAY_MSGS__MSG__DETAIL__CHASSISMILEAGEMETERFB__STRUCT_H_
#define SEGWAY_MSGS__MSG__DETAIL__CHASSISMILEAGEMETERFB__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Chassismileagemeterfb in the package segway_msgs.
typedef struct segway_msgs__msg__Chassismileagemeterfb
{
  uint32_t vehicle_meters;
} segway_msgs__msg__Chassismileagemeterfb;

// Struct for a sequence of segway_msgs__msg__Chassismileagemeterfb.
typedef struct segway_msgs__msg__Chassismileagemeterfb__Sequence
{
  segway_msgs__msg__Chassismileagemeterfb * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} segway_msgs__msg__Chassismileagemeterfb__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SEGWAY_MSGS__MSG__DETAIL__CHASSISMILEAGEMETERFB__STRUCT_H_
