// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from segway_msgs:srv/RosGetSwVersionCmd.idl
// generated code does not contain a copyright notice

#ifndef SEGWAY_MSGS__SRV__DETAIL__ROS_GET_SW_VERSION_CMD__STRUCT_HPP_
#define SEGWAY_MSGS__SRV__DETAIL__ROS_GET_SW_VERSION_CMD__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__segway_msgs__srv__RosGetSwVersionCmd_Request __attribute__((deprecated))
#else
# define DEPRECATED__segway_msgs__srv__RosGetSwVersionCmd_Request __declspec(deprecated)
#endif

namespace segway_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct RosGetSwVersionCmd_Request_
{
  using Type = RosGetSwVersionCmd_Request_<ContainerAllocator>;

  explicit RosGetSwVersionCmd_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ros_getsw_version_cmd = false;
    }
  }

  explicit RosGetSwVersionCmd_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ros_getsw_version_cmd = false;
    }
  }

  // field types and members
  using _ros_getsw_version_cmd_type =
    bool;
  _ros_getsw_version_cmd_type ros_getsw_version_cmd;

  // setters for named parameter idiom
  Type & set__ros_getsw_version_cmd(
    const bool & _arg)
  {
    this->ros_getsw_version_cmd = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    segway_msgs::srv::RosGetSwVersionCmd_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const segway_msgs::srv::RosGetSwVersionCmd_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<segway_msgs::srv::RosGetSwVersionCmd_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<segway_msgs::srv::RosGetSwVersionCmd_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      segway_msgs::srv::RosGetSwVersionCmd_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<segway_msgs::srv::RosGetSwVersionCmd_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      segway_msgs::srv::RosGetSwVersionCmd_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<segway_msgs::srv::RosGetSwVersionCmd_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<segway_msgs::srv::RosGetSwVersionCmd_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<segway_msgs::srv::RosGetSwVersionCmd_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__segway_msgs__srv__RosGetSwVersionCmd_Request
    std::shared_ptr<segway_msgs::srv::RosGetSwVersionCmd_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__segway_msgs__srv__RosGetSwVersionCmd_Request
    std::shared_ptr<segway_msgs::srv::RosGetSwVersionCmd_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RosGetSwVersionCmd_Request_ & other) const
  {
    if (this->ros_getsw_version_cmd != other.ros_getsw_version_cmd) {
      return false;
    }
    return true;
  }
  bool operator!=(const RosGetSwVersionCmd_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RosGetSwVersionCmd_Request_

// alias to use template instance with default allocator
using RosGetSwVersionCmd_Request =
  segway_msgs::srv::RosGetSwVersionCmd_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace segway_msgs


#ifndef _WIN32
# define DEPRECATED__segway_msgs__srv__RosGetSwVersionCmd_Response __attribute__((deprecated))
#else
# define DEPRECATED__segway_msgs__srv__RosGetSwVersionCmd_Response __declspec(deprecated)
#endif

namespace segway_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct RosGetSwVersionCmd_Response_
{
  using Type = RosGetSwVersionCmd_Response_<ContainerAllocator>;

  explicit RosGetSwVersionCmd_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->host_version = 0;
      this->host_pantchversion = 0;
      this->central_version = 0;
      this->motor_version = 0;
    }
  }

  explicit RosGetSwVersionCmd_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->host_version = 0;
      this->host_pantchversion = 0;
      this->central_version = 0;
      this->motor_version = 0;
    }
  }

  // field types and members
  using _host_version_type =
    uint16_t;
  _host_version_type host_version;
  using _host_pantchversion_type =
    uint16_t;
  _host_pantchversion_type host_pantchversion;
  using _central_version_type =
    uint16_t;
  _central_version_type central_version;
  using _motor_version_type =
    uint16_t;
  _motor_version_type motor_version;

  // setters for named parameter idiom
  Type & set__host_version(
    const uint16_t & _arg)
  {
    this->host_version = _arg;
    return *this;
  }
  Type & set__host_pantchversion(
    const uint16_t & _arg)
  {
    this->host_pantchversion = _arg;
    return *this;
  }
  Type & set__central_version(
    const uint16_t & _arg)
  {
    this->central_version = _arg;
    return *this;
  }
  Type & set__motor_version(
    const uint16_t & _arg)
  {
    this->motor_version = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    segway_msgs::srv::RosGetSwVersionCmd_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const segway_msgs::srv::RosGetSwVersionCmd_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<segway_msgs::srv::RosGetSwVersionCmd_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<segway_msgs::srv::RosGetSwVersionCmd_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      segway_msgs::srv::RosGetSwVersionCmd_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<segway_msgs::srv::RosGetSwVersionCmd_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      segway_msgs::srv::RosGetSwVersionCmd_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<segway_msgs::srv::RosGetSwVersionCmd_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<segway_msgs::srv::RosGetSwVersionCmd_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<segway_msgs::srv::RosGetSwVersionCmd_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__segway_msgs__srv__RosGetSwVersionCmd_Response
    std::shared_ptr<segway_msgs::srv::RosGetSwVersionCmd_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__segway_msgs__srv__RosGetSwVersionCmd_Response
    std::shared_ptr<segway_msgs::srv::RosGetSwVersionCmd_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RosGetSwVersionCmd_Response_ & other) const
  {
    if (this->host_version != other.host_version) {
      return false;
    }
    if (this->host_pantchversion != other.host_pantchversion) {
      return false;
    }
    if (this->central_version != other.central_version) {
      return false;
    }
    if (this->motor_version != other.motor_version) {
      return false;
    }
    return true;
  }
  bool operator!=(const RosGetSwVersionCmd_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RosGetSwVersionCmd_Response_

// alias to use template instance with default allocator
using RosGetSwVersionCmd_Response =
  segway_msgs::srv::RosGetSwVersionCmd_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace segway_msgs

namespace segway_msgs
{

namespace srv
{

struct RosGetSwVersionCmd
{
  using Request = segway_msgs::srv::RosGetSwVersionCmd_Request;
  using Response = segway_msgs::srv::RosGetSwVersionCmd_Response;
};

}  // namespace srv

}  // namespace segway_msgs

#endif  // SEGWAY_MSGS__SRV__DETAIL__ROS_GET_SW_VERSION_CMD__STRUCT_HPP_
