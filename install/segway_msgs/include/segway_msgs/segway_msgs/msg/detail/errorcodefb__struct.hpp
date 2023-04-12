// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from segway_msgs:msg/Errorcodefb.idl
// generated code does not contain a copyright notice

#ifndef SEGWAY_MSGS__MSG__DETAIL__ERRORCODEFB__STRUCT_HPP_
#define SEGWAY_MSGS__MSG__DETAIL__ERRORCODEFB__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__segway_msgs__msg__Errorcodefb __attribute__((deprecated))
#else
# define DEPRECATED__segway_msgs__msg__Errorcodefb __declspec(deprecated)
#endif

namespace segway_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Errorcodefb_
{
  using Type = Errorcodefb_<ContainerAllocator>;

  explicit Errorcodefb_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->host_error = 0ul;
      this->central_error = 0ul;
      this->front_left_motor_error = 0ul;
      this->front_right_motor_error = 0ul;
      this->rear_left_motor_error = 0ul;
      this->rear_right_motor_error = 0ul;
      this->bms_error = 0ul;
      this->brake_error = 0ul;
    }
  }

  explicit Errorcodefb_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->host_error = 0ul;
      this->central_error = 0ul;
      this->front_left_motor_error = 0ul;
      this->front_right_motor_error = 0ul;
      this->rear_left_motor_error = 0ul;
      this->rear_right_motor_error = 0ul;
      this->bms_error = 0ul;
      this->brake_error = 0ul;
    }
  }

  // field types and members
  using _host_error_type =
    uint32_t;
  _host_error_type host_error;
  using _central_error_type =
    uint32_t;
  _central_error_type central_error;
  using _front_left_motor_error_type =
    uint32_t;
  _front_left_motor_error_type front_left_motor_error;
  using _front_right_motor_error_type =
    uint32_t;
  _front_right_motor_error_type front_right_motor_error;
  using _rear_left_motor_error_type =
    uint32_t;
  _rear_left_motor_error_type rear_left_motor_error;
  using _rear_right_motor_error_type =
    uint32_t;
  _rear_right_motor_error_type rear_right_motor_error;
  using _bms_error_type =
    uint32_t;
  _bms_error_type bms_error;
  using _brake_error_type =
    uint32_t;
  _brake_error_type brake_error;

  // setters for named parameter idiom
  Type & set__host_error(
    const uint32_t & _arg)
  {
    this->host_error = _arg;
    return *this;
  }
  Type & set__central_error(
    const uint32_t & _arg)
  {
    this->central_error = _arg;
    return *this;
  }
  Type & set__front_left_motor_error(
    const uint32_t & _arg)
  {
    this->front_left_motor_error = _arg;
    return *this;
  }
  Type & set__front_right_motor_error(
    const uint32_t & _arg)
  {
    this->front_right_motor_error = _arg;
    return *this;
  }
  Type & set__rear_left_motor_error(
    const uint32_t & _arg)
  {
    this->rear_left_motor_error = _arg;
    return *this;
  }
  Type & set__rear_right_motor_error(
    const uint32_t & _arg)
  {
    this->rear_right_motor_error = _arg;
    return *this;
  }
  Type & set__bms_error(
    const uint32_t & _arg)
  {
    this->bms_error = _arg;
    return *this;
  }
  Type & set__brake_error(
    const uint32_t & _arg)
  {
    this->brake_error = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    segway_msgs::msg::Errorcodefb_<ContainerAllocator> *;
  using ConstRawPtr =
    const segway_msgs::msg::Errorcodefb_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<segway_msgs::msg::Errorcodefb_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<segway_msgs::msg::Errorcodefb_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      segway_msgs::msg::Errorcodefb_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<segway_msgs::msg::Errorcodefb_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      segway_msgs::msg::Errorcodefb_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<segway_msgs::msg::Errorcodefb_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<segway_msgs::msg::Errorcodefb_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<segway_msgs::msg::Errorcodefb_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__segway_msgs__msg__Errorcodefb
    std::shared_ptr<segway_msgs::msg::Errorcodefb_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__segway_msgs__msg__Errorcodefb
    std::shared_ptr<segway_msgs::msg::Errorcodefb_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Errorcodefb_ & other) const
  {
    if (this->host_error != other.host_error) {
      return false;
    }
    if (this->central_error != other.central_error) {
      return false;
    }
    if (this->front_left_motor_error != other.front_left_motor_error) {
      return false;
    }
    if (this->front_right_motor_error != other.front_right_motor_error) {
      return false;
    }
    if (this->rear_left_motor_error != other.rear_left_motor_error) {
      return false;
    }
    if (this->rear_right_motor_error != other.rear_right_motor_error) {
      return false;
    }
    if (this->bms_error != other.bms_error) {
      return false;
    }
    if (this->brake_error != other.brake_error) {
      return false;
    }
    return true;
  }
  bool operator!=(const Errorcodefb_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Errorcodefb_

// alias to use template instance with default allocator
using Errorcodefb =
  segway_msgs::msg::Errorcodefb_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace segway_msgs

#endif  // SEGWAY_MSGS__MSG__DETAIL__ERRORCODEFB__STRUCT_HPP_
