// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from segway_msgs:msg/Ticksfb.idl
// generated code does not contain a copyright notice

#ifndef SEGWAY_MSGS__MSG__DETAIL__TICKSFB__STRUCT_H_
#define SEGWAY_MSGS__MSG__DETAIL__TICKSFB__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Ticksfb in the package segway_msgs.
typedef struct segway_msgs__msg__Ticksfb
{
  int32_t fl_ticks;
  int32_t fr_ticks;
  int32_t rl_ticks;
  int32_t rr_ticks;
  uint64_t ticks_timestamp;
} segway_msgs__msg__Ticksfb;

// Struct for a sequence of segway_msgs__msg__Ticksfb.
typedef struct segway_msgs__msg__Ticksfb__Sequence
{
  segway_msgs__msg__Ticksfb * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} segway_msgs__msg__Ticksfb__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SEGWAY_MSGS__MSG__DETAIL__TICKSFB__STRUCT_H_
