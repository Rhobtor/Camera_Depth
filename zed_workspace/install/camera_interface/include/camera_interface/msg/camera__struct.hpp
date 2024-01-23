// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from camera_interface:msg/Camera.idl
// generated code does not contain a copyright notice

#ifndef CAMERA_INTERFACE__MSG__CAMERA__STRUCT_HPP_
#define CAMERA_INTERFACE__MSG__CAMERA__STRUCT_HPP_

#include <rosidl_generator_cpp/bounded_vector.hpp>
#include <rosidl_generator_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__camera_interface__msg__Camera __attribute__((deprecated))
#else
# define DEPRECATED__camera_interface__msg__Camera __declspec(deprecated)
#endif

namespace camera_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Camera_
{
  using Type = Camera_<ContainerAllocator>;

  explicit Camera_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0ll;
      this->label = "";
      this->confidence = 0.0;
    }
  }

  explicit Camera_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : label(_alloc)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0ll;
      this->label = "";
      this->confidence = 0.0;
    }
  }

  // field types and members
  using _id_type =
    int64_t;
  _id_type id;
  using _label_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _label_type label;
  using _position_type =
    std::vector<double, typename ContainerAllocator::template rebind<double>::other>;
  _position_type position;
  using _confidence_type =
    double;
  _confidence_type confidence;
  using _dimensions_type =
    std::vector<double, typename ContainerAllocator::template rebind<double>::other>;
  _dimensions_type dimensions;
  using _velocity_type =
    std::vector<double, typename ContainerAllocator::template rebind<double>::other>;
  _velocity_type velocity;

  // setters for named parameter idiom
  Type & set__id(
    const int64_t & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__label(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->label = _arg;
    return *this;
  }
  Type & set__position(
    const std::vector<double, typename ContainerAllocator::template rebind<double>::other> & _arg)
  {
    this->position = _arg;
    return *this;
  }
  Type & set__confidence(
    const double & _arg)
  {
    this->confidence = _arg;
    return *this;
  }
  Type & set__dimensions(
    const std::vector<double, typename ContainerAllocator::template rebind<double>::other> & _arg)
  {
    this->dimensions = _arg;
    return *this;
  }
  Type & set__velocity(
    const std::vector<double, typename ContainerAllocator::template rebind<double>::other> & _arg)
  {
    this->velocity = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    camera_interface::msg::Camera_<ContainerAllocator> *;
  using ConstRawPtr =
    const camera_interface::msg::Camera_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<camera_interface::msg::Camera_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<camera_interface::msg::Camera_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      camera_interface::msg::Camera_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<camera_interface::msg::Camera_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      camera_interface::msg::Camera_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<camera_interface::msg::Camera_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<camera_interface::msg::Camera_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<camera_interface::msg::Camera_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__camera_interface__msg__Camera
    std::shared_ptr<camera_interface::msg::Camera_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__camera_interface__msg__Camera
    std::shared_ptr<camera_interface::msg::Camera_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Camera_ & other) const
  {
    if (this->id != other.id) {
      return false;
    }
    if (this->label != other.label) {
      return false;
    }
    if (this->position != other.position) {
      return false;
    }
    if (this->confidence != other.confidence) {
      return false;
    }
    if (this->dimensions != other.dimensions) {
      return false;
    }
    if (this->velocity != other.velocity) {
      return false;
    }
    return true;
  }
  bool operator!=(const Camera_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Camera_

// alias to use template instance with default allocator
using Camera =
  camera_interface::msg::Camera_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace camera_interface

#endif  // CAMERA_INTERFACE__MSG__CAMERA__STRUCT_HPP_
