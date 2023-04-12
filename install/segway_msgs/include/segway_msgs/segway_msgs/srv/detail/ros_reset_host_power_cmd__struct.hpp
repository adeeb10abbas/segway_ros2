// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from segway_msgs:srv/RosResetHostPowerCmd.idl
// generated code does not contain a copyright notice

#ifndef SEGWAY_MSGS__SRV__DETAIL__ROS_RESET_HOST_POWER_CMD__STRUCT_HPP_
#define SEGWAY_MSGS__SRV__DETAIL__ROS_RESET_HOST_POWER_CMD__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__segway_msgs__srv__RosResetHostPowerCmd_Request __attribute__((deprecated))
#else
# define DEPRECATED__segway_msgs__srv__RosResetHostPowerCmd_Request __declspec(deprecated)
#endif

namespace segway_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct RosResetHostPowerCmd_Request_
{
  using Type = RosResetHostPowerCmd_Request_<ContainerAllocator>;

  explicit RosResetHostPowerCmd_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->reset_intervaltime = 0;
    }
  }

  explicit RosResetHostPowerCmd_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->reset_intervaltime = 0;
    }
  }

  // field types and members
  using _reset_intervaltime_type =
    uint16_t;
  _reset_intervaltime_type reset_intervaltime;

  // setters for named parameter idiom
  Type & set__reset_intervaltime(
    const uint16_t & _arg)
  {
    this->reset_intervaltime = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    segway_msgs::srv::RosResetHostPowerCmd_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const segway_msgs::srv::RosResetHostPowerCmd_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<segway_msgs::srv::RosResetHostPowerCmd_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<segway_msgs::srv::RosResetHostPowerCmd_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      segway_msgs::srv::RosResetHostPowerCmd_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<segway_msgs::srv::RosResetHostPowerCmd_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      segway_msgs::srv::RosResetHostPowerCmd_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<segway_msgs::srv::RosResetHostPowerCmd_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<segway_msgs::srv::RosResetHostPowerCmd_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<segway_msgs::srv::RosResetHostPowerCmd_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__segway_msgs__srv__RosResetHostPowerCmd_Request
    std::shared_ptr<segway_msgs::srv::RosResetHostPowerCmd_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__segway_msgs__srv__RosResetHostPowerCmd_Request
    std::shared_ptr<segway_msgs::srv::RosResetHostPowerCmd_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RosResetHostPowerCmd_Request_ & other) const
  {
    if (this->reset_intervaltime != other.reset_intervaltime) {
      return false;
    }
    return true;
  }
  bool operator!=(const RosResetHostPowerCmd_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RosResetHostPowerCmd_Request_

// alias to use template instance with default allocator
using RosResetHostPowerCmd_Request =
  segway_msgs::srv::RosResetHostPowerCmd_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace segway_msgs


#ifndef _WIN32
# define DEPRECATED__segway_msgs__srv__RosResetHostPowerCmd_Response __attribute__((deprecated))
#else
# define DEPRECATED__segway_msgs__srv__RosResetHostPowerCmd_Response __declspec(deprecated)
#endif

namespace segway_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct RosResetHostPowerCmd_Response_
{
  using Type = RosResetHostPowerCmd_Response_<ContainerAllocator>;

  explicit RosResetHostPowerCmd_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->reset_result = 0;
    }
  }

  explicit RosResetHostPowerCmd_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->reset_result = 0;
    }
  }

  // field types and members
  using _reset_result_type =
    uint8_t;
  _reset_result_type reset_result;

  // setters for named parameter idiom
  Type & set__reset_result(
    const uint8_t & _arg)
  {
    this->reset_result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    segway_msgs::srv::RosResetHostPowerCmd_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const segway_msgs::srv::RosResetHostPowerCmd_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<segway_msgs::srv::RosResetHostPowerCmd_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<segway_msgs::srv::RosResetHostPowerCmd_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      segway_msgs::srv::RosResetHostPowerCmd_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<segway_msgs::srv::RosResetHostPowerCmd_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      segway_msgs::srv::RosResetHostPowerCmd_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<segway_msgs::srv::RosResetHostPowerCmd_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<segway_msgs::srv::RosResetHostPowerCmd_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<segway_msgs::srv::RosResetHostPowerCmd_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__segway_msgs__srv__RosResetHostPowerCmd_Response
    std::shared_ptr<segway_msgs::srv::RosResetHostPowerCmd_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__segway_msgs__srv__RosResetHostPowerCmd_Response
    std::shared_ptr<segway_msgs::srv::RosResetHostPowerCmd_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RosResetHostPowerCmd_Response_ & other) const
  {
    if (this->reset_result != other.reset_result) {
      return false;
    }
    return true;
  }
  bool operator!=(const RosResetHostPowerCmd_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RosResetHostPowerCmd_Response_

// alias to use template instance with default allocator
using RosResetHostPowerCmd_Response =
  segway_msgs::srv::RosResetHostPowerCmd_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace segway_msgs

namespace segway_msgs
{

namespace srv
{

struct RosResetHostPowerCmd
{
  using Request = segway_msgs::srv::RosResetHostPowerCmd_Request;
  using Response = segway_msgs::srv::RosResetHostPowerCmd_Response;
};

}  // namespace srv

}  // namespace segway_msgs

#endif  // SEGWAY_MSGS__SRV__DETAIL__ROS_RESET_HOST_POWER_CMD__STRUCT_HPP_
