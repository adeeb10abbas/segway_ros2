// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from segway_msgs:msg/Bmsfb.idl
// generated code does not contain a copyright notice

#ifndef SEGWAY_MSGS__MSG__DETAIL__BMSFB__STRUCT_HPP_
#define SEGWAY_MSGS__MSG__DETAIL__BMSFB__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__segway_msgs__msg__Bmsfb __attribute__((deprecated))
#else
# define DEPRECATED__segway_msgs__msg__Bmsfb __declspec(deprecated)
#endif

namespace segway_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Bmsfb_
{
  using Type = Bmsfb_<ContainerAllocator>;

  explicit Bmsfb_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->bat_soc = 0;
      this->bat_charging = 0;
      this->bat_vol = 0l;
      this->bat_current = 0l;
      this->bat_temp = 0;
    }
  }

  explicit Bmsfb_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->bat_soc = 0;
      this->bat_charging = 0;
      this->bat_vol = 0l;
      this->bat_current = 0l;
      this->bat_temp = 0;
    }
  }

  // field types and members
  using _bat_soc_type =
    int16_t;
  _bat_soc_type bat_soc;
  using _bat_charging_type =
    int16_t;
  _bat_charging_type bat_charging;
  using _bat_vol_type =
    int32_t;
  _bat_vol_type bat_vol;
  using _bat_current_type =
    int32_t;
  _bat_current_type bat_current;
  using _bat_temp_type =
    int16_t;
  _bat_temp_type bat_temp;

  // setters for named parameter idiom
  Type & set__bat_soc(
    const int16_t & _arg)
  {
    this->bat_soc = _arg;
    return *this;
  }
  Type & set__bat_charging(
    const int16_t & _arg)
  {
    this->bat_charging = _arg;
    return *this;
  }
  Type & set__bat_vol(
    const int32_t & _arg)
  {
    this->bat_vol = _arg;
    return *this;
  }
  Type & set__bat_current(
    const int32_t & _arg)
  {
    this->bat_current = _arg;
    return *this;
  }
  Type & set__bat_temp(
    const int16_t & _arg)
  {
    this->bat_temp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    segway_msgs::msg::Bmsfb_<ContainerAllocator> *;
  using ConstRawPtr =
    const segway_msgs::msg::Bmsfb_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<segway_msgs::msg::Bmsfb_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<segway_msgs::msg::Bmsfb_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      segway_msgs::msg::Bmsfb_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<segway_msgs::msg::Bmsfb_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      segway_msgs::msg::Bmsfb_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<segway_msgs::msg::Bmsfb_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<segway_msgs::msg::Bmsfb_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<segway_msgs::msg::Bmsfb_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__segway_msgs__msg__Bmsfb
    std::shared_ptr<segway_msgs::msg::Bmsfb_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__segway_msgs__msg__Bmsfb
    std::shared_ptr<segway_msgs::msg::Bmsfb_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Bmsfb_ & other) const
  {
    if (this->bat_soc != other.bat_soc) {
      return false;
    }
    if (this->bat_charging != other.bat_charging) {
      return false;
    }
    if (this->bat_vol != other.bat_vol) {
      return false;
    }
    if (this->bat_current != other.bat_current) {
      return false;
    }
    if (this->bat_temp != other.bat_temp) {
      return false;
    }
    return true;
  }
  bool operator!=(const Bmsfb_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Bmsfb_

// alias to use template instance with default allocator
using Bmsfb =
  segway_msgs::msg::Bmsfb_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace segway_msgs

#endif  // SEGWAY_MSGS__MSG__DETAIL__BMSFB__STRUCT_HPP_
