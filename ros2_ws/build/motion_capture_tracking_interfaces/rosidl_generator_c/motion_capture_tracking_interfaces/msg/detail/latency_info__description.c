// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from motion_capture_tracking_interfaces:msg/LatencyInfo.idl
// generated code does not contain a copyright notice

#include "motion_capture_tracking_interfaces/msg/detail/latency_info__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_motion_capture_tracking_interfaces
const rosidl_type_hash_t *
motion_capture_tracking_interfaces__msg__LatencyInfo__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x86, 0x37, 0x12, 0x59, 0xaf, 0x25, 0xc1, 0x5b,
      0x5f, 0x67, 0x3e, 0x6a, 0x51, 0x44, 0x27, 0xc1,
      0x12, 0x88, 0xfa, 0xe1, 0x7e, 0x65, 0xb1, 0xb0,
      0x4b, 0x14, 0x73, 0x6a, 0x0f, 0xee, 0x99, 0x94,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char motion_capture_tracking_interfaces__msg__LatencyInfo__TYPE_NAME[] = "motion_capture_tracking_interfaces/msg/LatencyInfo";

// Define type names, field names, and default values
static char motion_capture_tracking_interfaces__msg__LatencyInfo__FIELD_NAME__source[] = "source";
static char motion_capture_tracking_interfaces__msg__LatencyInfo__FIELD_NAME__latency[] = "latency";

static rosidl_runtime_c__type_description__Field motion_capture_tracking_interfaces__msg__LatencyInfo__FIELDS[] = {
  {
    {motion_capture_tracking_interfaces__msg__LatencyInfo__FIELD_NAME__source, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {motion_capture_tracking_interfaces__msg__LatencyInfo__FIELD_NAME__latency, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
motion_capture_tracking_interfaces__msg__LatencyInfo__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {motion_capture_tracking_interfaces__msg__LatencyInfo__TYPE_NAME, 50, 50},
      {motion_capture_tracking_interfaces__msg__LatencyInfo__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "string source\n"
  "uint32 latency # estimated, in microseconds";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
motion_capture_tracking_interfaces__msg__LatencyInfo__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {motion_capture_tracking_interfaces__msg__LatencyInfo__TYPE_NAME, 50, 50},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 58, 58},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
motion_capture_tracking_interfaces__msg__LatencyInfo__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *motion_capture_tracking_interfaces__msg__LatencyInfo__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
