// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from segway_msgs:msg/Chassisctrlsrcfb.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "segway_msgs/msg/detail/chassisctrlsrcfb__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace segway_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void Chassisctrlsrcfb_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) segway_msgs::msg::Chassisctrlsrcfb(_init);
}

void Chassisctrlsrcfb_fini_function(void * message_memory)
{
  auto typed_message = static_cast<segway_msgs::msg::Chassisctrlsrcfb *>(message_memory);
  typed_message->~Chassisctrlsrcfb();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Chassisctrlsrcfb_message_member_array[1] = {
  {
    "chassis_ctrl_cmd_src",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(segway_msgs::msg::Chassisctrlsrcfb, chassis_ctrl_cmd_src),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Chassisctrlsrcfb_message_members = {
  "segway_msgs::msg",  // message namespace
  "Chassisctrlsrcfb",  // message name
  1,  // number of fields
  sizeof(segway_msgs::msg::Chassisctrlsrcfb),
  Chassisctrlsrcfb_message_member_array,  // message members
  Chassisctrlsrcfb_init_function,  // function to initialize message memory (memory has to be allocated)
  Chassisctrlsrcfb_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Chassisctrlsrcfb_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Chassisctrlsrcfb_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace segway_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<segway_msgs::msg::Chassisctrlsrcfb>()
{
  return &::segway_msgs::msg::rosidl_typesupport_introspection_cpp::Chassisctrlsrcfb_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, segway_msgs, msg, Chassisctrlsrcfb)() {
  return &::segway_msgs::msg::rosidl_typesupport_introspection_cpp::Chassisctrlsrcfb_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
