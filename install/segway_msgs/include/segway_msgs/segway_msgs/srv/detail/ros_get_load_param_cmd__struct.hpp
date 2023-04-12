// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from segway_msgs:srv/RosGetLoadParamCmd.idl
// generated code does not contain a copyright notice

#ifndef SEGWAY_MSGS__SRV__DETAIL__ROS_GET_LOAD_PARAM_CMD__STRUCT_HPP_
#define SEGWAY_MSGS__SRV__DETAIL__ROS_GET_LOAD_PARAM_CMD__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__segway_msgs__srv__RosGetLoadParamCmd_Request __attribute__((deprecated))
#else
# define DEPRECATED__segway_msgs__srv__RosGetLoadParamCmd_Request __declspec(deprecated)
#endif

namespace segway_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct RosGetLoadParamCmd_Request_
{
  using Type = RosGetLoadParamCmd_Request_<ContainerAllocator>;

  explicit RosGetLoadParamCmd_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ros_getload_param = false;
    }
  }

  explicit RosGetLoadParamCmd_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ros_getload_param = false;
    }
  }

  // field types and members
  using _ros_getload_param_type =
    bool;
  _ros_getload_param_type ros_getload_param;

  // setters for named parameter idiom
  Type & set__ros_getload_param(
    const bool & _arg)
  {
    this->ros_getload_param = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    segway_msgs::srv::RosGetLoadParamCmd_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const segway_msgs::srv::RosGetLoadParamCmd_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<segway_msgs::srv::RosGetLoadParamCmd_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<segway_msgs::srv::RosGetLoadParamCmd_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      segway_msgs::srv::RosGetLoadParamCmd_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<segway_msgs::srv::RosGetLoadParamCmd_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      segway_msgs::srv::RosGetLoadParamCmd_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<segway_msgs::srv::RosGetLoadParamCmd_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<segway_msgs::srv::RosGetLoadParamCmd_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<segway_msgs::srv::RosGetLoadParamCmd_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__segway_msgs__srv__RosGetLoadParamCmd_Request
    std::shared_ptr<segway_msgs::srv::RosGetLoadParamCmd_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__segway_msgs__srv__RosGetLoadParamCmd_Request
    std::shared_ptr<segway_msgs::srv::RosGetLoadParamCmd_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RosGetLoadParamCmd_Request_ & other) const
  {
    if (this->ros_getload_param != other.ros_getload_param) {
      return false;
    }
    return true;
  }
  bool operator!=(const RosGetLoadParamCmd_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RosGetLoadParamCmd_Request_

// alias to use template instance with default allocator
using RosGetLoadParamCmd_Request =
  segway_msgs::srv::RosGetLoadParamCmd_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace segway_msgs


#ifndef _WIN32
# define DEPRECATED__segway_msgs__srv__RosGetLoadParamCmd_Response __attribute__((deprecated))
#else
# define DEPRECATED__segway_msgs__srv__RosGetLoadParamCmd_Response __declspec(deprecated)
#endif

namespace segway_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct RosGetLoadParamCmd_Response_
{
  using Type = RosGetLoadParamCmd_Response_<ContainerAllocator>;

  explicit RosGetLoadParamCmd_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->get_loadparam = 0;
    }
  }

  explicit RosGetLoadParamCmd_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->get_loadparam = 0;
    }
  }

  // field types and members
  using _get_loadparam_type =
    int16_t;
  _get_loadparam_type get_loadparam;

  // setters for named parameter idiom
  Type & set__get_loadparam(
    const int16_t & _arg)
  {
    this->get_loadparam = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    segway_msgs::srv::RosGetLoadParamCmd_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const segway_msgs::srv::RosGetLoadParamCmd_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<segway_msgs::srv::RosGetLoadParamCmd_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<segway_msgs::srv::RosGetLoadParamCmd_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      segway_msgs::srv::RosGetLoadParamCmd_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<segway_msgs::srv::RosGetLoadParamCmd_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      segway_msgs::srv::RosGetLoadParamCmd_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<segway_msgs::srv::RosGetLoadParamCmd_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<segway_msgs::srv::RosGetLoadParamCmd_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<segway_msgs::srv::RosGetLoadParamCmd_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__segway_msgs__srv__RosGetLoadParamCmd_Response
    std::shared_ptr<segway_msgs::srv::RosGetLoadParamCmd_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__segway_msgs__srv__RosGetLoadParamCmd_Response
    std::shared_ptr<segway_msgs::srv::RosGetLoadParamCmd_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RosGetLoadParamCmd_Response_ & other) const
  {
    if (this->get_loadparam != other.get_loadparam) {
      return false;
    }
    return true;
  }
  bool operator!=(const RosGetLoadParamCmd_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RosGetLoadParamCmd_Response_

// alias to use template instance with default allocator
using RosGetLoadParamCmd_Response =
  segway_msgs::srv::RosGetLoadParamCmd_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace segway_msgs

namespace segway_msgs
{

namespace srv
{

struct RosGetLoadParamCmd
{
  using Request = segway_msgs::srv::RosGetLoadParamCmd_Request;
  using Response = segway_msgs::srv::RosGetLoadParamCmd_Response;
};

}  // namespace srv

}  // namespace segway_msgs

#endif  // SEGWAY_MSGS__SRV__DETAIL__ROS_GET_LOAD_PARAM_CMD__STRUCT_HPP_
