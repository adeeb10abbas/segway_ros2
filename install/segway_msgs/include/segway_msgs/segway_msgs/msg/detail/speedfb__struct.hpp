// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from segway_msgs:msg/Speedfb.idl
// generated code does not contain a copyright notice

#ifndef SEGWAY_MSGS__MSG__DETAIL__SPEEDFB__STRUCT_HPP_
#define SEGWAY_MSGS__MSG__DETAIL__SPEEDFB__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__segway_msgs__msg__Speedfb __attribute__((deprecated))
#else
# define DEPRECATED__segway_msgs__msg__Speedfb __declspec(deprecated)
#endif

namespace segway_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Speedfb_
{
  using Type = Speedfb_<ContainerAllocator>;

  explicit Speedfb_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->car_speed = 0.0f;
      this->turn_speed = 0.0f;
      this->fl_speed = 0.0f;
      this->fr_speed = 0.0f;
      this->rl_speed = 0.0f;
      this->rr_speed = 0.0f;
      this->speed_timestamp = 0ull;
    }
  }

  explicit Speedfb_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->car_speed = 0.0f;
      this->turn_speed = 0.0f;
      this->fl_speed = 0.0f;
      this->fr_speed = 0.0f;
      this->rl_speed = 0.0f;
      this->rr_speed = 0.0f;
      this->speed_timestamp = 0ull;
    }
  }

  // field types and members
  using _car_speed_type =
    float;
  _car_speed_type car_speed;
  using _turn_speed_type =
    float;
  _turn_speed_type turn_speed;
  using _fl_speed_type =
    float;
  _fl_speed_type fl_speed;
  using _fr_speed_type =
    float;
  _fr_speed_type fr_speed;
  using _rl_speed_type =
    float;
  _rl_speed_type rl_speed;
  using _rr_speed_type =
    float;
  _rr_speed_type rr_speed;
  using _speed_timestamp_type =
    uint64_t;
  _speed_timestamp_type speed_timestamp;

  // setters for named parameter idiom
  Type & set__car_speed(
    const float & _arg)
  {
    this->car_speed = _arg;
    return *this;
  }
  Type & set__turn_speed(
    const float & _arg)
  {
    this->turn_speed = _arg;
    return *this;
  }
  Type & set__fl_speed(
    const float & _arg)
  {
    this->fl_speed = _arg;
    return *this;
  }
  Type & set__fr_speed(
    const float & _arg)
  {
    this->fr_speed = _arg;
    return *this;
  }
  Type & set__rl_speed(
    const float & _arg)
  {
    this->rl_speed = _arg;
    return *this;
  }
  Type & set__rr_speed(
    const float & _arg)
  {
    this->rr_speed = _arg;
    return *this;
  }
  Type & set__speed_timestamp(
    const uint64_t & _arg)
  {
    this->speed_timestamp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    segway_msgs::msg::Speedfb_<ContainerAllocator> *;
  using ConstRawPtr =
    const segway_msgs::msg::Speedfb_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<segway_msgs::msg::Speedfb_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<segway_msgs::msg::Speedfb_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      segway_msgs::msg::Speedfb_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<segway_msgs::msg::Speedfb_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      segway_msgs::msg::Speedfb_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<segway_msgs::msg::Speedfb_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<segway_msgs::msg::Speedfb_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<segway_msgs::msg::Speedfb_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__segway_msgs__msg__Speedfb
    std::shared_ptr<segway_msgs::msg::Speedfb_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__segway_msgs__msg__Speedfb
    std::shared_ptr<segway_msgs::msg::Speedfb_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Speedfb_ & other) const
  {
    if (this->car_speed != other.car_speed) {
      return false;
    }
    if (this->turn_speed != other.turn_speed) {
      return false;
    }
    if (this->fl_speed != other.fl_speed) {
      return false;
    }
    if (this->fr_speed != other.fr_speed) {
      return false;
    }
    if (this->rl_speed != other.rl_speed) {
      return false;
    }
    if (this->rr_speed != other.rr_speed) {
      return false;
    }
    if (this->speed_timestamp != other.speed_timestamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const Speedfb_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Speedfb_

// alias to use template instance with default allocator
using Speedfb =
  segway_msgs::msg::Speedfb_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace segway_msgs

#endif  // SEGWAY_MSGS__MSG__DETAIL__SPEEDFB__STRUCT_HPP_
