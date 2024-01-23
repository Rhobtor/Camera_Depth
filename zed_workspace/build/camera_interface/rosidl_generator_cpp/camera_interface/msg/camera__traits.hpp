// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from camera_interface:msg/Camera.idl
// generated code does not contain a copyright notice

#ifndef CAMERA_INTERFACE__MSG__CAMERA__TRAITS_HPP_
#define CAMERA_INTERFACE__MSG__CAMERA__TRAITS_HPP_

#include "camera_interface/msg/camera__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<camera_interface::msg::Camera>()
{
  return "camera_interface::msg::Camera";
}

template<>
struct has_fixed_size<camera_interface::msg::Camera>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<camera_interface::msg::Camera>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<camera_interface::msg::Camera>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CAMERA_INTERFACE__MSG__CAMERA__TRAITS_HPP_
