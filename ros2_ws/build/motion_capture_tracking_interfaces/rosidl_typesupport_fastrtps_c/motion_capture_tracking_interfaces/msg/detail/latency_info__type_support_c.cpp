// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from motion_capture_tracking_interfaces:msg/LatencyInfo.idl
// generated code does not contain a copyright notice
#include "motion_capture_tracking_interfaces/msg/detail/latency_info__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "motion_capture_tracking_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "motion_capture_tracking_interfaces/msg/detail/latency_info__struct.h"
#include "motion_capture_tracking_interfaces/msg/detail/latency_info__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/string.h"  // source
#include "rosidl_runtime_c/string_functions.h"  // source

// forward declare type support functions


using _LatencyInfo__ros_msg_type = motion_capture_tracking_interfaces__msg__LatencyInfo;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_motion_capture_tracking_interfaces
bool cdr_serialize_motion_capture_tracking_interfaces__msg__LatencyInfo(
  const motion_capture_tracking_interfaces__msg__LatencyInfo * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: source
  {
    const rosidl_runtime_c__String * str = &ros_message->source;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: latency
  {
    cdr << ros_message->latency;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_motion_capture_tracking_interfaces
bool cdr_deserialize_motion_capture_tracking_interfaces__msg__LatencyInfo(
  eprosima::fastcdr::Cdr & cdr,
  motion_capture_tracking_interfaces__msg__LatencyInfo * ros_message)
{
  // Field name: source
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->source.data) {
      rosidl_runtime_c__String__init(&ros_message->source);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->source,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'source'\n");
      return false;
    }
  }

  // Field name: latency
  {
    cdr >> ros_message->latency;
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_motion_capture_tracking_interfaces
size_t get_serialized_size_motion_capture_tracking_interfaces__msg__LatencyInfo(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _LatencyInfo__ros_msg_type * ros_message = static_cast<const _LatencyInfo__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: source
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->source.size + 1);

  // Field name: latency
  {
    size_t item_size = sizeof(ros_message->latency);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_motion_capture_tracking_interfaces
size_t max_serialized_size_motion_capture_tracking_interfaces__msg__LatencyInfo(
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

  // Field name: source
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

  // Field name: latency
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
    using DataType = motion_capture_tracking_interfaces__msg__LatencyInfo;
    is_plain =
      (
      offsetof(DataType, latency) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_motion_capture_tracking_interfaces
bool cdr_serialize_key_motion_capture_tracking_interfaces__msg__LatencyInfo(
  const motion_capture_tracking_interfaces__msg__LatencyInfo * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: source
  {
    const rosidl_runtime_c__String * str = &ros_message->source;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: latency
  {
    cdr << ros_message->latency;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_motion_capture_tracking_interfaces
size_t get_serialized_size_key_motion_capture_tracking_interfaces__msg__LatencyInfo(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _LatencyInfo__ros_msg_type * ros_message = static_cast<const _LatencyInfo__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: source
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->source.size + 1);

  // Field name: latency
  {
    size_t item_size = sizeof(ros_message->latency);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_motion_capture_tracking_interfaces
size_t max_serialized_size_key_motion_capture_tracking_interfaces__msg__LatencyInfo(
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
  // Field name: source
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

  // Field name: latency
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
    using DataType = motion_capture_tracking_interfaces__msg__LatencyInfo;
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
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const motion_capture_tracking_interfaces__msg__LatencyInfo * ros_message = static_cast<const motion_capture_tracking_interfaces__msg__LatencyInfo *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_motion_capture_tracking_interfaces__msg__LatencyInfo(ros_message, cdr);
}

static bool _LatencyInfo__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  motion_capture_tracking_interfaces__msg__LatencyInfo * ros_message = static_cast<motion_capture_tracking_interfaces__msg__LatencyInfo *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_motion_capture_tracking_interfaces__msg__LatencyInfo(cdr, ros_message);
}

static uint32_t _LatencyInfo__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_motion_capture_tracking_interfaces__msg__LatencyInfo(
      untyped_ros_message, 0));
}

static size_t _LatencyInfo__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_motion_capture_tracking_interfaces__msg__LatencyInfo(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_LatencyInfo = {
  "motion_capture_tracking_interfaces::msg",
  "LatencyInfo",
  _LatencyInfo__cdr_serialize,
  _LatencyInfo__cdr_deserialize,
  _LatencyInfo__get_serialized_size,
  _LatencyInfo__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _LatencyInfo__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_LatencyInfo,
  get_message_typesupport_handle_function,
  &motion_capture_tracking_interfaces__msg__LatencyInfo__get_type_hash,
  &motion_capture_tracking_interfaces__msg__LatencyInfo__get_type_description,
  &motion_capture_tracking_interfaces__msg__LatencyInfo__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, motion_capture_tracking_interfaces, msg, LatencyInfo)() {
  return &_LatencyInfo__type_support;
}

#if defined(__cplusplus)
}
#endif
