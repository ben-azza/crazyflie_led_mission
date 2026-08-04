// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from motion_capture_tracking_interfaces:msg/LatencyInfo.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "motion_capture_tracking_interfaces/msg/latency_info.hpp"


#ifndef MOTION_CAPTURE_TRACKING_INTERFACES__MSG__DETAIL__LATENCY_INFO__BUILDER_HPP_
#define MOTION_CAPTURE_TRACKING_INTERFACES__MSG__DETAIL__LATENCY_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "motion_capture_tracking_interfaces/msg/detail/latency_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace motion_capture_tracking_interfaces
{

namespace msg
{

namespace builder
{

class Init_LatencyInfo_latency
{
public:
  explicit Init_LatencyInfo_latency(::motion_capture_tracking_interfaces::msg::LatencyInfo & msg)
  : msg_(msg)
  {}
  ::motion_capture_tracking_interfaces::msg::LatencyInfo latency(::motion_capture_tracking_interfaces::msg::LatencyInfo::_latency_type arg)
  {
    msg_.latency = std::move(arg);
    return std::move(msg_);
  }

private:
  ::motion_capture_tracking_interfaces::msg::LatencyInfo msg_;
};

class Init_LatencyInfo_source
{
public:
  Init_LatencyInfo_source()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LatencyInfo_latency source(::motion_capture_tracking_interfaces::msg::LatencyInfo::_source_type arg)
  {
    msg_.source = std::move(arg);
    return Init_LatencyInfo_latency(msg_);
  }

private:
  ::motion_capture_tracking_interfaces::msg::LatencyInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::motion_capture_tracking_interfaces::msg::LatencyInfo>()
{
  return motion_capture_tracking_interfaces::msg::builder::Init_LatencyInfo_source();
}

}  // namespace motion_capture_tracking_interfaces

#endif  // MOTION_CAPTURE_TRACKING_INTERFACES__MSG__DETAIL__LATENCY_INFO__BUILDER_HPP_
