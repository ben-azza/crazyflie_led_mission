// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from motion_capture_tracking_interfaces:msg/LatencyInfo.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "motion_capture_tracking_interfaces/msg/latency_info.hpp"


#ifndef MOTION_CAPTURE_TRACKING_INTERFACES__MSG__DETAIL__LATENCY_INFO__STRUCT_HPP_
#define MOTION_CAPTURE_TRACKING_INTERFACES__MSG__DETAIL__LATENCY_INFO__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__motion_capture_tracking_interfaces__msg__LatencyInfo __attribute__((deprecated))
#else
# define DEPRECATED__motion_capture_tracking_interfaces__msg__LatencyInfo __declspec(deprecated)
#endif

namespace motion_capture_tracking_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LatencyInfo_
{
  using Type = LatencyInfo_<ContainerAllocator>;

  explicit LatencyInfo_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->source = "";
      this->latency = 0ul;
    }
  }

  explicit LatencyInfo_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : source(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->source = "";
      this->latency = 0ul;
    }
  }

  // field types and members
  using _source_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _source_type source;
  using _latency_type =
    uint32_t;
  _latency_type latency;

  // setters for named parameter idiom
  Type & set__source(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->source = _arg;
    return *this;
  }
  Type & set__latency(
    const uint32_t & _arg)
  {
    this->latency = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    motion_capture_tracking_interfaces::msg::LatencyInfo_<ContainerAllocator> *;
  using ConstRawPtr =
    const motion_capture_tracking_interfaces::msg::LatencyInfo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<motion_capture_tracking_interfaces::msg::LatencyInfo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<motion_capture_tracking_interfaces::msg::LatencyInfo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      motion_capture_tracking_interfaces::msg::LatencyInfo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<motion_capture_tracking_interfaces::msg::LatencyInfo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      motion_capture_tracking_interfaces::msg::LatencyInfo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<motion_capture_tracking_interfaces::msg::LatencyInfo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<motion_capture_tracking_interfaces::msg::LatencyInfo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<motion_capture_tracking_interfaces::msg::LatencyInfo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__motion_capture_tracking_interfaces__msg__LatencyInfo
    std::shared_ptr<motion_capture_tracking_interfaces::msg::LatencyInfo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__motion_capture_tracking_interfaces__msg__LatencyInfo
    std::shared_ptr<motion_capture_tracking_interfaces::msg::LatencyInfo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LatencyInfo_ & other) const
  {
    if (this->source != other.source) {
      return false;
    }
    if (this->latency != other.latency) {
      return false;
    }
    return true;
  }
  bool operator!=(const LatencyInfo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LatencyInfo_

// alias to use template instance with default allocator
using LatencyInfo =
  motion_capture_tracking_interfaces::msg::LatencyInfo_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace motion_capture_tracking_interfaces

#endif  // MOTION_CAPTURE_TRACKING_INTERFACES__MSG__DETAIL__LATENCY_INFO__STRUCT_HPP_
