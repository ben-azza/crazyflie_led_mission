// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from motion_capture_tracking_interfaces:msg/LatencyInfo.idl
// generated code does not contain a copyright notice
#include "motion_capture_tracking_interfaces/msg/detail/latency_info__rosidl_typesupport_fastrtps_cpp.hpp"
#include "motion_capture_tracking_interfaces/msg/detail/latency_info__functions.h"
#include "motion_capture_tracking_interfaces/msg/detail/latency_info__struct.hpp"

#include <cstddef>
#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace motion_capture_tracking_interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{


bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_motion_capture_tracking_interfaces
cdr_serialize(
  const motion_capture_tracking_interfaces::msg::LatencyInfo & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: source
  cdr << ros_message.source;

  // Member: latency
  cdr << ros_message.latency;

  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_motion_capture_tracking_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  motion_capture_tracking_interfaces::msg::LatencyInfo & ros_message)
{
  // Member: source
  cdr >> ros_message.source;

  // Member: latency
  cdr >> ros_message.latency;

  return true;
}  // NOLINT(readability/fn_size)


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_motion_capture_tracking_interfaces
get_serialized_size(
  const motion_capture_tracking_interfaces::msg::LatencyInfo & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: source
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.source.size() + 1);

  // Member: latency
  {
    size_t item_size = sizeof(ros_message.latency);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_motion_capture_tracking_interfaces
max_serialized_size_LatencyInfo(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Member: source
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // Member: latency
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = motion_capture_tracking_interfaces::msg::LatencyInfo;
    is_plain =
      (
      offsetof(DataType, latency) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_motion_capture_tracking_interfaces
cdr_serialize_key(
  const motion_capture_tracking_interfaces::msg::LatencyInfo & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: source
  cdr << ros_message.source;

  // Member: latency
  cdr << ros_message.latency;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_motion_capture_tracking_interfaces
get_serialized_size_key(
  const motion_capture_tracking_interfaces::msg::LatencyInfo & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: source
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.source.size() + 1);

  // Member: latency
  {
    size_t item_size = sizeof(ros_message.latency);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_motion_capture_tracking_interfaces
max_serialized_size_key_LatencyInfo(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Member: source
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: latency
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = motion_capture_tracking_interfaces::msg::LatencyInfo;
    is_plain =
      (
      offsetof(DataType, latency) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}


static bool _LatencyInfo__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const motion_capture_tracking_interfaces::msg::LatencyInfo *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _LatencyInfo__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<motion_capture_tracking_interfaces::msg::LatencyInfo *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _LatencyInfo__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const motion_capture_tracking_interfaces::msg::LatencyInfo *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _LatencyInfo__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_LatencyInfo(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _LatencyInfo__callbacks = {
  "motion_capture_tracking_interfaces::msg",
  "LatencyInfo",
  _LatencyInfo__cdr_serialize,
  _LatencyInfo__cdr_deserialize,
  _LatencyInfo__get_serialized_size,
  _LatencyInfo__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _LatencyInfo__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_LatencyInfo__callbacks,
  get_message_typesupport_handle_function,
  &motion_capture_tracking_interfaces__msg__LatencyInfo__get_type_hash,
  &motion_capture_tracking_interfaces__msg__LatencyInfo__get_type_description,
  &motion_capture_tracking_interfaces__msg__LatencyInfo__get_type_description_sources,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace motion_capture_tracking_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_motion_capture_tracking_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<motion_capture_tracking_interfaces::msg::LatencyInfo>()
{
  return &motion_capture_tracking_interfaces::msg::typesupport_fastrtps_cpp::_LatencyInfo__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, motion_capture_tracking_interfaces, msg, LatencyInfo)() {
  return &motion_capture_tracking_interfaces::msg::typesupport_fastrtps_cpp::_LatencyInfo__handle;
}

#ifdef __cplusplus
}
#endif
