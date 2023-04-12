// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from segway_msgs:srv/ChassisSendEvent.idl
// generated code does not contain a copyright notice

#ifndef SEGWAY_MSGS__SRV__DETAIL__CHASSIS_SEND_EVENT__STRUCT_HPP_
#define SEGWAY_MSGS__SRV__DETAIL__CHASSIS_SEND_EVENT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__segway_msgs__srv__ChassisSendEvent_Request __attribute__((deprecated))
#else
# define DEPRECATED__segway_msgs__srv__ChassisSendEvent_Request __declspec(deprecated)
#endif

namespace segway_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ChassisSendEvent_Request_
{
  using Type = ChassisSendEvent_Request_<ContainerAllocator>;

  explicit ChassisSendEvent_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->chassis_sendevent_id = 0;
    }
  }

  explicit ChassisSendEvent_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->chassis_sendevent_id = 0;
    }
  }

  // field types and members
  using _chassis_sendevent_id_type =
    int16_t;
  _chassis_sendevent_id_type chassis_sendevent_id;

  // setters for named parameter idiom
  Type & set__chassis_sendevent_id(
    const int16_t & _arg)
  {
    this->chassis_sendevent_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    segway_msgs::srv::ChassisSendEvent_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const segway_msgs::srv::ChassisSendEvent_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<segway_msgs::srv::ChassisSendEvent_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<segway_msgs::srv::ChassisSendEvent_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      segway_msgs::srv::ChassisSendEvent_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<segway_msgs::srv::ChassisSendEvent_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      segway_msgs::srv::ChassisSendEvent_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<segway_msgs::srv::ChassisSendEvent_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<segway_msgs::srv::ChassisSendEvent_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<segway_msgs::srv::ChassisSendEvent_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__segway_msgs__srv__ChassisSendEvent_Request
    std::shared_ptr<segway_msgs::srv::ChassisSendEvent_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__segway_msgs__srv__ChassisSendEvent_Request
    std::shared_ptr<segway_msgs::srv::ChassisSendEvent_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ChassisSendEvent_Request_ & other) const
  {
    if (this->chassis_sendevent_id != other.chassis_sendevent_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const ChassisSendEvent_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ChassisSendEvent_Request_

// alias to use template instance with default allocator
using ChassisSendEvent_Request =
  segway_msgs::srv::ChassisSendEvent_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace segway_msgs


#ifndef _WIN32
# define DEPRECATED__segway_msgs__srv__ChassisSendEvent_Response __attribute__((deprecated))
#else
# define DEPRECATED__segway_msgs__srv__ChassisSendEvent_Response __declspec(deprecated)
#endif

namespace segway_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ChassisSendEvent_Response_
{
  using Type = ChassisSendEvent_Response_<ContainerAllocator>;

  explicit ChassisSendEvent_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ros_isreceived = false;
    }
  }

  explicit ChassisSendEvent_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ros_isreceived = false;
    }
  }

  // field types and members
  using _ros_isreceived_type =
    bool;
  _ros_isreceived_type ros_isreceived;

  // setters for named parameter idiom
  Type & set__ros_isreceived(
    const bool & _arg)
  {
    this->ros_isreceived = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    segway_msgs::srv::ChassisSendEvent_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const segway_msgs::srv::ChassisSendEvent_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<segway_msgs::srv::ChassisSendEvent_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<segway_msgs::srv::ChassisSendEvent_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      segway_msgs::srv::ChassisSendEvent_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<segway_msgs::srv::ChassisSendEvent_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      segway_msgs::srv::ChassisSendEvent_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<segway_msgs::srv::ChassisSendEvent_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<segway_msgs::srv::ChassisSendEvent_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<segway_msgs::srv::ChassisSendEvent_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__segway_msgs__srv__ChassisSendEvent_Response
    std::shared_ptr<segway_msgs::srv::ChassisSendEvent_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__segway_msgs__srv__ChassisSendEvent_Response
    std::shared_ptr<segway_msgs::srv::ChassisSendEvent_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ChassisSendEvent_Response_ & other) const
  {
    if (this->ros_isreceived != other.ros_isreceived) {
      return false;
    }
    return true;
  }
  bool operator!=(const ChassisSendEvent_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ChassisSendEvent_Response_

// alias to use template instance with default allocator
using ChassisSendEvent_Response =
  segway_msgs::srv::ChassisSendEvent_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace segway_msgs

namespace segway_msgs
{

namespace srv
{

struct ChassisSendEvent
{
  using Request = segway_msgs::srv::ChassisSendEvent_Request;
  using Response = segway_msgs::srv::ChassisSendEvent_Response;
};

}  // namespace srv

}  // namespace segway_msgs

#endif  // SEGWAY_MSGS__SRV__DETAIL__CHASSIS_SEND_EVENT__STRUCT_HPP_
