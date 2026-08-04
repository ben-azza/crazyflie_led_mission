// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from motion_capture_tracking_interfaces:msg/LatencyInfo.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "motion_capture_tracking_interfaces/msg/latency_info.hpp"


#ifndef MOTION_CAPTURE_TRACKING_INTERFACES__MSG__DETAIL__LATENCY_INFO__TRAITS_HPP_
#define MOTION_CAPTURE_TRACKING_INTERFACES__MSG__DETAIL__LATENCY_INFO__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "motion_capture_tracking_interfaces/msg/detail/latency_info__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace motion_capture_tracking_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const LatencyInfo & msg,
  std::ostream & out)
{
  out << "{";
  // member: source
  {
    out << "source: ";
    rosidl_generator_traits::value_to_yaml(msg.source, out);
    out << ", ";
  }

  // member: latency
  {
    out << "latency: ";
    rosidl_generator_traits::value_to_yaml(msg.latency, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const LatencyInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: source
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "source: ";
    rosidl_generator_traits::value_to_yaml(msg.source, out);
    out << "\n";
  }

  // member: latency
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "latency: ";
    rosidl_generator_traits::value_to_yaml(msg.latency, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LatencyInfo & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace motion_capture_tracking_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use motion_capture_tracking_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const motion_capture_tracking_interfaces::msg::LatencyInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  motion_capture_tracking_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use motion_capture_tracking_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const motion_capture_tracking_interfaces::msg::LatencyInfo & msg)
{
  return motion_capture_tracking_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<motion_capture_tracking_interfaces::msg::LatencyInfo>()
{
  return "motion_capture_tracking_interfaces::msg::LatencyInfo";
}

template<>
inline const char * name<motion_capture_tracking_interfaces::msg::LatencyInfo>()
{
  return "motion_capture_tracking_interfaces/msg/LatencyInfo";
}

template<>
struct has_fixed_size<motion_capture_tracking_interfaces::msg::LatencyInfo>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<motion_capture_tracking_interfaces::msg::LatencyInfo>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<motion_capture_tracking_interfaces::msg::LatencyInfo>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MOTION_CAPTURE_TRACKING_INTERFACES__MSG__DETAIL__LATENCY_INFO__TRAITS_HPP_
