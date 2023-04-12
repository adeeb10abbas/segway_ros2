// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from segway_msgs:srv/RosClearChassisErrorCodeCmd.idl
// generated code does not contain a copyright notice

#ifndef SEGWAY_MSGS__SRV__DETAIL__ROS_CLEAR_CHASSIS_ERROR_CODE_CMD__STRUCT_HPP_
#define SEGWAY_MSGS__SRV__DETAIL__ROS_CLEAR_CHASSIS_ERROR_CODE_CMD__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__segway_msgs__srv__RosClearChassisErrorCodeCmd_Request __attribute__((deprecated))
#else
# define DEPRECATED__segway_msgs__srv__RosClearChassisErrorCodeCmd_Request __declspec(deprecated)
#endif

namespace segway_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct RosClearChassisErrorCodeCmd_Request_
{
  using Type = RosClearChassisErrorCodeCmd_Request_<ContainerAllocator>;

  explicit RosClearChassisErrorCodeCmd_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->clear_chassiserror_code_cmd = false;
    }
  }

  explicit RosClearChassisErrorCodeCmd_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->clear_chassiserror_code_cmd = false;
    }
  }

  // field types and members
  using _clear_chassiserror_code_cmd_type =
    bool;
  _clear_chassiserror_code_cmd_type clear_chassiserror_code_cmd;

  // setters for named parameter idiom
  Type & set__clear_chassiserror_code_cmd(
    const bool & _arg)
  {
    this->clear_chassiserror_code_cmd = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    segway_msgs::srv::RosClearChassisErrorCodeCmd_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const segway_msgs::srv::RosClearChassisErrorCodeCmd_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<segway_msgs::srv::RosClearChassisErrorCodeCmd_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<segway_msgs::srv::RosClearChassisErrorCodeCmd_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      segway_msgs::srv::RosClearChassisErrorCodeCmd_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<segway_msgs::srv::RosClearChassisErrorCodeCmd_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      segway_msgs::srv::RosClearChassisErrorCodeCmd_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<segway_msgs::srv::RosClearChassisErrorCodeCmd_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<segway_msgs::srv::RosClearChassisErrorCodeCmd_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<segway_msgs::srv::RosClearChassisErrorCodeCmd_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__segway_msgs__srv__RosClearChassisErrorCodeCmd_Request
    std::shared_ptr<segway_msgs::srv::RosClearChassisErrorCodeCmd_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__segway_msgs__srv__RosClearChassisErrorCodeCmd_Request
    std::shared_ptr<segway_msgs::srv::RosClearChassisErrorCodeCmd_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RosClearChassisErrorCodeCmd_Request_ & other) const
  {
    if (this->clear_chassiserror_code_cmd != other.clear_chassiserror_code_cmd) {
      return false;
    }
    return true;
  }
  bool operator!=(const RosClearChassisErrorCodeCmd_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RosClearChassisErrorCodeCmd_Request_

// alias to use template instance with default allocator
using RosClearChassisErrorCodeCmd_Request =
  segway_msgs::srv::RosClearChassisErrorCodeCmd_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace segway_msgs


#ifndef _WIN32
# define DEPRECATED__segway_msgs__srv__RosClearChassisErrorCodeCmd_Response __attribute__((deprecated))
#else
# define DEPRECATED__segway_msgs__srv__RosClearChassisErrorCodeCmd_Response __declspec(deprecated)
#endif

namespace segway_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct RosClearChassisErrorCodeCmd_Response_
{
  using Type = RosClearChassisErrorCodeCmd_Response_<ContainerAllocator>;

  explicit RosClearChassisErrorCodeCmd_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->clear_chassiserror_code_result = 0;
    }
  }

  explicit RosClearChassisErrorCodeCmd_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->clear_chassiserror_code_result = 0;
    }
  }

  // field types and members
  using _clear_chassiserror_code_result_type =
    uint8_t;
  _clear_chassiserror_code_result_type clear_chassiserror_code_result;

  // setters for named parameter idiom
  Type & set__clear_chassiserror_code_result(
    const uint8_t & _arg)
  {
    this->clear_chassiserror_code_result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    segway_msgs::srv::RosClearChassisErrorCodeCmd_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const segway_msgs::srv::RosClearChassisErrorCodeCmd_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<segway_msgs::srv::RosClearChassisErrorCodeCmd_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<segway_msgs::srv::RosClearChassisErrorCodeCmd_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      segway_msgs::srv::RosClearChassisErrorCodeCmd_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<segway_msgs::srv::RosClearChassisErrorCodeCmd_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      segway_msgs::srv::RosClearChassisErrorCodeCmd_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<segway_msgs::srv::RosClearChassisErrorCodeCmd_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<segway_msgs::srv::RosClearChassisErrorCodeCmd_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<segway_msgs::srv::RosClearChassisErrorCodeCmd_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__segway_msgs__srv__RosClearChassisErrorCodeCmd_Response
    std::shared_ptr<segway_msgs::srv::RosClearChassisErrorCodeCmd_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__segway_msgs__srv__RosClearChassisErrorCodeCmd_Response
    std::shared_ptr<segway_msgs::srv::RosClearChassisErrorCodeCmd_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RosClearChassisErrorCodeCmd_Response_ & other) const
  {
    if (this->clear_chassiserror_code_result != other.clear_chassiserror_code_result) {
      return false;
    }
    return true;
  }
  bool operator!=(const RosClearChassisErrorCodeCmd_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RosClearChassisErrorCodeCmd_Response_

// alias to use template instance with default allocator
using RosClearChassisErrorCodeCmd_Response =
  segway_msgs::srv::RosClearChassisErrorCodeCmd_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace segway_msgs

namespace segway_msgs
{

namespace srv
{

struct RosClearChassisErrorCodeCmd
{
  using Request = segway_msgs::srv::RosClearChassisErrorCodeCmd_Request;
  using Response = segway_msgs::srv::RosClearChassisErrorCodeCmd_Response;
};

}  // namespace srv

}  // namespace segway_msgs

#endif  // SEGWAY_MSGS__SRV__DETAIL__ROS_CLEAR_CHASSIS_ERROR_CODE_CMD__STRUCT_HPP_
