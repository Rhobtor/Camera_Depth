// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from camera_interface:msg/Obstacles.idl
// generated code does not contain a copyright notice

#ifndef CAMERA_INTERFACE__MSG__OBSTACLES__STRUCT_HPP_
#define CAMERA_INTERFACE__MSG__OBSTACLES__STRUCT_HPP_

#include <rosidl_generator_cpp/bounded_vector.hpp>
#include <rosidl_generator_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'objects'
#include "camera_interface/msg/camera__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__camera_interface__msg__Obstacles __attribute__((deprecated))
#else
# define DEPRECATED__camera_interface__msg__Obstacles __declspec(deprecated)
#endif

namespace camera_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Obstacles_
{
  using Type = Obstacles_<ContainerAllocator>;

  explicit Obstacles_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->angle_increment = 0.0;
    }
  }

  explicit Obstacles_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->angle_increment = 0.0;
    }
  }

  // field types and members
  using _angle_increment_type =
    double;
  _angle_increment_type angle_increment;
  using _objects_type =
    std::vector<camera_interface::msg::Camera_<ContainerAllocator>, typename ContainerAllocator::template rebind<camera_interface::msg::Camera_<ContainerAllocator>>::other>;
  _objects_type objects;

  // setters for named parameter idiom
  Type & set__angle_increment(
    const double & _arg)
  {
    this->angle_increment = _arg;
    return *this;
  }
  Type & set__objects(
    const std::vector<camera_interface::msg::Camera_<ContainerAllocator>, typename ContainerAllocator::template rebind<camera_interface::msg::Camera_<ContainerAllocator>>::other> & _arg)
  {
    this->objects = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    camera_interface::msg::Obstacles_<ContainerAllocator> *;
  using ConstRawPtr =
    const camera_interface::msg::Obstacles_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<camera_interface::msg::Obstacles_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<camera_interface::msg::Obstacles_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      camera_interface::msg::Obstacles_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<camera_interface::msg::Obstacles_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      camera_interface::msg::Obstacles_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<camera_interface::msg::Obstacles_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<camera_interface::msg::Obstacles_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<camera_interface::msg::Obstacles_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__camera_interface__msg__Obstacles
    std::shared_ptr<camera_interface::msg::Obstacles_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__camera_interface__msg__Obstacles
    std::shared_ptr<camera_interface::msg::Obstacles_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Obstacles_ & other) const
  {
    if (this->angle_increment != other.angle_increment) {
      return false;
    }
    if (this->objects != other.objects) {
      return false;
    }
    return true;
  }
  bool operator!=(const Obstacles_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Obstacles_

// alias to use template instance with default allocator
using Obstacles =
  camera_interface::msg::Obstacles_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace camera_interface

#endif  // CAMERA_INTERFACE__MSG__OBSTACLES__STRUCT_HPP_
