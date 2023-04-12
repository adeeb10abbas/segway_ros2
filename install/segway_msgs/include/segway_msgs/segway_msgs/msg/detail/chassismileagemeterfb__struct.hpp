// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from segway_msgs:msg/Chassismileagemeterfb.idl
// generated code does not contain a copyright notice

#ifndef SEGWAY_MSGS__MSG__DETAIL__CHASSISMILEAGEMETERFB__STRUCT_HPP_
#define SEGWAY_MSGS__MSG__DETAIL__CHASSISMILEAGEMETERFB__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__segway_msgs__msg__Chassismileagemeterfb __attribute__((deprecated))
#else
# define DEPRECATED__segway_msgs__msg__Chassismileagemeterfb __declspec(deprecated)
#endif

namespace segway_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Chassismileagemeterfb_
{
  using Type = Chassismileagemeterfb_<ContainerAllocator>;

  explicit Chassismileagemeterfb_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->vehicle_meters = 0ul;
    }
  }

  explicit Chassismileagemeterfb_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->vehicle_meters = 0ul;
    }
  }

  // field types and members
  using _vehicle_meters_type =
    uint32_t;
  _vehicle_meters_type vehicle_meters;

  // setters for named parameter idiom
  Type & set__vehicle_meters(
    const uint32_t & _arg)
  {
    this->vehicle_meters = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    segway_msgs::msg::Chassismileagemeterfb_<ContainerAllocator> *;
  using ConstRawPtr =
    const segway_msgs::msg::Chassismileagemeterfb_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<segway_msgs::msg::Chassismileagemeterfb_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<segway_msgs::msg::Chassismileagemeterfb_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      segway_msgs::msg::Chassismileagemeterfb_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<segway_msgs::msg::Chassismileagemeterfb_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      segway_msgs::msg::Chassismileagemeterfb_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<segway_msgs::msg::Chassismileagemeterfb_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<segway_msgs::msg::Chassismileagemeterfb_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<segway_msgs::msg::Chassismileagemeterfb_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__segway_msgs__msg__Chassismileagemeterfb
    std::shared_ptr<segway_msgs::msg::Chassismileagemeterfb_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__segway_msgs__msg__Chassismileagemeterfb
    std::shared_ptr<segway_msgs::msg::Chassismileagemeterfb_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Chassismileagemeterfb_ & other) const
  {
    if (this->vehicle_meters != other.vehicle_meters) {
      return false;
    }
    return true;
  }
  bool operator!=(const Chassismileagemeterfb_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Chassismileagemeterfb_

// alias to use template instance with default allocator
using Chassismileagemeterfb =
  segway_msgs::msg::Chassismileagemeterfb_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace segway_msgs

#endif  // SEGWAY_MSGS__MSG__DETAIL__CHASSISMILEAGEMETERFB__STRUCT_HPP_
