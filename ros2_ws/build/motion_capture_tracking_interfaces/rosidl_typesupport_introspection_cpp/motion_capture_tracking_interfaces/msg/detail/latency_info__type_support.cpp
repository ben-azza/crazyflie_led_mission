// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from motion_capture_tracking_interfaces:msg/LatencyInfo.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "motion_capture_tracking_interfaces/msg/detail/latency_info__functions.h"
#include "motion_capture_tracking_interfaces/msg/detail/latency_info__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace motion_capture_tracking_interfaces
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void LatencyInfo_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) motion_capture_tracking_interfaces::msg::LatencyInfo(_init);
}

void LatencyInfo_fini_function(void * message_memory)
{
  auto typed_message = static_cast<motion_capture_tracking_interfaces::msg::LatencyInfo *>(message_memory);
  typed_message->~LatencyInfo();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember LatencyInfo_message_member_array[2] = {
  {
    "source",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(motion_capture_tracking_interfaces::msg::LatencyInfo, source),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "latency",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(motion_capture_tracking_interfaces::msg::LatencyInfo, latency),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers LatencyInfo_message_members = {
  "motion_capture_tracking_interfaces::msg",  // message namespace
  "LatencyInfo",  // message name
  2,  // number of fields
  sizeof(motion_capture_tracking_interfaces::msg::LatencyInfo),
  false,  // has_any_key_member_
  LatencyInfo_message_member_array,  // message members
  LatencyInfo_init_function,  // function to initialize message memory (memory has to be allocated)
  LatencyInfo_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t LatencyInfo_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &LatencyInfo_message_members,
  get_message_typesupport_handle_function,
  &motion_capture_tracking_interfaces__msg__LatencyInfo__get_type_hash,
  &motion_capture_tracking_interfaces__msg__LatencyInfo__get_type_description,
  &motion_capture_tracking_interfaces__msg__LatencyInfo__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace motion_capture_tracking_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<motion_capture_tracking_interfaces::msg::LatencyInfo>()
{
  return &::motion_capture_tracking_interfaces::msg::rosidl_typesupport_introspection_cpp::LatencyInfo_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, motion_capture_tracking_interfaces, msg, LatencyInfo)() {
  return &::motion_capture_tracking_interfaces::msg::rosidl_typesupport_introspection_cpp::LatencyInfo_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
