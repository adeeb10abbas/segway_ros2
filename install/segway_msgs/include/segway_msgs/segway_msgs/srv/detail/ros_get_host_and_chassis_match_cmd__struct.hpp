// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from segway_msgs:srv/RosGetHostAndChassisMatchCmd.idl
// generated code does not contain a copyright notice

#ifndef SEGWAY_MSGS__SRV__DETAIL__ROS_GET_HOST_AND_CHASSIS_MATCH_CMD__STRUCT_HPP_
#define SEGWAY_MSGS__SRV__DETAIL__ROS_GET_HOST_AND_CHASSIS_MATCH_CMD__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__segway_msgs__srv__RosGetHostAndChassisMatchCmd_Request __attribute__((deprecated))
#else
# define DEPRECATED__segway_msgs__srv__RosGetHostAndChassisMatchCmd_Request __declspec(deprecated)
#endif

namespace segway_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct RosGetHostAndChassisMatchCmd_Request_
{
  using Type = RosGetHostAndChassisMatchCmd_Request_<ContainerAllocator>;

  explicit RosGetHostAndChassisMatchCmd_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit RosGetHostAndChassisMatchCmd_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  // field types and members
  using _structure_needs_at_least_one_member_type =
    uint8_t;
  _structure_needs_at_least_one_member_type structure_needs_at_least_one_member;


  // constant declarations

  // pointer types
  using RawPtr =
    segway_msgs::srv::RosGetHostAndChassisMatchCmd_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const segway_msgs::srv::RosGetHostAndChassisMatchCmd_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<segway_msgs::srv::RosGetHostAndChassisMatchCmd_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<segway_msgs::srv::RosGetHostAndChassisMatchCmd_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      segway_msgs::srv::RosGetHostAndChassisMatchCmd_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<segway_msgs::srv::RosGetHostAndChassisMatchCmd_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      segway_msgs::srv::RosGetHostAndChassisMatchCmd_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<segway_msgs::srv::RosGetHostAndChassisMatchCmd_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<segway_msgs::srv::RosGetHostAndChassisMatchCmd_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<segway_msgs::srv::RosGetHostAndChassisMatchCmd_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__segway_msgs__srv__RosGetHostAndChassisMatchCmd_Request
    std::shared_ptr<segway_msgs::srv::RosGetHostAndChassisMatchCmd_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__segway_msgs__srv__RosGetHostAndChassisMatchCmd_Request
    std::shared_ptr<segway_msgs::srv::RosGetHostAndChassisMatchCmd_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RosGetHostAndChassisMatchCmd_Request_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const RosGetHostAndChassisMatchCmd_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RosGetHostAndChassisMatchCmd_Request_

// alias to use template instance with default allocator
using RosGetHostAndChassisMatchCmd_Request =
  segway_msgs::srv::RosGetHostAndChassisMatchCmd_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace segway_msgs


#ifndef _WIN32
# define DEPRECATED__segway_msgs__srv__RosGetHostAndChassisMatchCmd_Response __attribute__((deprecated))
#else
# define DEPRECATED__segway_msgs__srv__RosGetHostAndChassisMatchCmd_Response __declspec(deprecated)
#endif

namespace segway_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct RosGetHostAndChassisMatchCmd_Response_
{
  using Type = RosGetHostAndChassisMatchCmd_Response_<ContainerAllocator>;

  explicit RosGetHostAndChassisMatchCmd_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->is_matchedwith_firmware = 0;
    }
  }

  explicit RosGetHostAndChassisMatchCmd_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->is_matchedwith_firmware = 0;
    }
  }

  // field types and members
  using _is_matchedwith_firmware_type =
    uint8_t;
  _is_matchedwith_firmware_type is_matchedwith_firmware;

  // setters for named parameter idiom
  Type & set__is_matchedwith_firmware(
    const uint8_t & _arg)
  {
    this->is_matchedwith_firmware = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    segway_msgs::srv::RosGetHostAndChassisMatchCmd_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const segway_msgs::srv::RosGetHostAndChassisMatchCmd_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<segway_msgs::srv::RosGetHostAndChassisMatchCmd_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<segway_msgs::srv::RosGetHostAndChassisMatchCmd_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      segway_msgs::srv::RosGetHostAndChassisMatchCmd_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<segway_msgs::srv::RosGetHostAndChassisMatchCmd_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      segway_msgs::srv::RosGetHostAndChassisMatchCmd_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<segway_msgs::srv::RosGetHostAndChassisMatchCmd_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<segway_msgs::srv::RosGetHostAndChassisMatchCmd_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<segway_msgs::srv::RosGetHostAndChassisMatchCmd_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__segway_msgs__srv__RosGetHostAndChassisMatchCmd_Response
    std::shared_ptr<segway_msgs::srv::RosGetHostAndChassisMatchCmd_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__segway_msgs__srv__RosGetHostAndChassisMatchCmd_Response
    std::shared_ptr<segway_msgs::srv::RosGetHostAndChassisMatchCmd_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RosGetHostAndChassisMatchCmd_Response_ & other) const
  {
    if (this->is_matchedwith_firmware != other.is_matchedwith_firmware) {
      return false;
    }
    return true;
  }
  bool operator!=(const RosGetHostAndChassisMatchCmd_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RosGetHostAndChassisMatchCmd_Response_

// alias to use template instance with default allocator
using RosGetHostAndChassisMatchCmd_Response =
  segway_msgs::srv::RosGetHostAndChassisMatchCmd_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace segway_msgs

namespace segway_msgs
{

namespace srv
{

struct RosGetHostAndChassisMatchCmd
{
  using Request = segway_msgs::srv::RosGetHostAndChassisMatchCmd_Request;
  using Response = segway_msgs::srv::RosGetHostAndChassisMatchCmd_Response;
};

}  // namespace srv

}  // namespace segway_msgs

#endif  // SEGWAY_MSGS__SRV__DETAIL__ROS_GET_HOST_AND_CHASSIS_MATCH_CMD__STRUCT_HPP_
