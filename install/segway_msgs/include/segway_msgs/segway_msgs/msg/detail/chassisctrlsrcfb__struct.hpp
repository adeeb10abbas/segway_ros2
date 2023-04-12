// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from segway_msgs:msg/Chassisctrlsrcfb.idl
// generated code does not contain a copyright notice

#ifndef SEGWAY_MSGS__MSG__DETAIL__CHASSISCTRLSRCFB__STRUCT_HPP_
#define SEGWAY_MSGS__MSG__DETAIL__CHASSISCTRLSRCFB__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__segway_msgs__msg__Chassisctrlsrcfb __attribute__((deprecated))
#else
# define DEPRECATED__segway_msgs__msg__Chassisctrlsrcfb __declspec(deprecated)
#endif

namespace segway_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Chassisctrlsrcfb_
{
  using Type = Chassisctrlsrcfb_<ContainerAllocator>;

  explicit Chassisctrlsrcfb_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->chassis_ctrl_cmd_src = 0;
    }
  }

  explicit Chassisctrlsrcfb_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->chassis_ctrl_cmd_src = 0;
    }
  }

  // field types and members
  using _chassis_ctrl_cmd_src_type =
    uint16_t;
  _chassis_ctrl_cmd_src_type chassis_ctrl_cmd_src;

  // setters for named parameter idiom
  Type & set__chassis_ctrl_cmd_src(
    const uint16_t & _arg)
  {
    this->chassis_ctrl_cmd_src = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    segway_msgs::msg::Chassisctrlsrcfb_<ContainerAllocator> *;
  using ConstRawPtr =
    const segway_msgs::msg::Chassisctrlsrcfb_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<segway_msgs::msg::Chassisctrlsrcfb_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<segway_msgs::msg::Chassisctrlsrcfb_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      segway_msgs::msg::Chassisctrlsrcfb_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<segway_msgs::msg::Chassisctrlsrcfb_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      segway_msgs::msg::Chassisctrlsrcfb_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<segway_msgs::msg::Chassisctrlsrcfb_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<segway_msgs::msg::Chassisctrlsrcfb_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<segway_msgs::msg::Chassisctrlsrcfb_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__segway_msgs__msg__Chassisctrlsrcfb
    std::shared_ptr<segway_msgs::msg::Chassisctrlsrcfb_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__segway_msgs__msg__Chassisctrlsrcfb
    std::shared_ptr<segway_msgs::msg::Chassisctrlsrcfb_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Chassisctrlsrcfb_ & other) const
  {
    if (this->chassis_ctrl_cmd_src != other.chassis_ctrl_cmd_src) {
      return false;
    }
    return true;
  }
  bool operator!=(const Chassisctrlsrcfb_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Chassisctrlsrcfb_

// alias to use template instance with default allocator
using Chassisctrlsrcfb =
  segway_msgs::msg::Chassisctrlsrcfb_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace segway_msgs

#endif  // SEGWAY_MSGS__MSG__DETAIL__CHASSISCTRLSRCFB__STRUCT_HPP_
