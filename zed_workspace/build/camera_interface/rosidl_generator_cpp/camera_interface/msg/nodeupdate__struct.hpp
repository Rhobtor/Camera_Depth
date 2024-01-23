// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from camera_interface:msg/Nodeupdate.idl
// generated code does not contain a copyright notice

#ifndef CAMERA_INTERFACE__MSG__NODEUPDATE__STRUCT_HPP_
#define CAMERA_INTERFACE__MSG__NODEUPDATE__STRUCT_HPP_

#include <rosidl_generator_cpp/bounded_vector.hpp>
#include <rosidl_generator_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__camera_interface__msg__Nodeupdate __attribute__((deprecated))
#else
# define DEPRECATED__camera_interface__msg__Nodeupdate __declspec(deprecated)
#endif

namespace camera_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Nodeupdate_
{
  using Type = Nodeupdate_<ContainerAllocator>;

  explicit Nodeupdate_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->node = "";
      this->message = "";
    }
  }

  explicit Nodeupdate_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : node(_alloc),
    message(_alloc)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->node = "";
      this->message = "";
    }
  }

  // field types and members
  using _node_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _node_type node;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _message_type message;

  // setters for named parameter idiom
  Type & set__node(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->node = _arg;
    return *this;
  }
  Type & set__message(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->message = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    camera_interface::msg::Nodeupdate_<ContainerAllocator> *;
  using ConstRawPtr =
    const camera_interface::msg::Nodeupdate_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<camera_interface::msg::Nodeupdate_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<camera_interface::msg::Nodeupdate_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      camera_interface::msg::Nodeupdate_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<camera_interface::msg::Nodeupdate_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      camera_interface::msg::Nodeupdate_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<camera_interface::msg::Nodeupdate_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<camera_interface::msg::Nodeupdate_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<camera_interface::msg::Nodeupdate_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__camera_interface__msg__Nodeupdate
    std::shared_ptr<camera_interface::msg::Nodeupdate_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__camera_interface__msg__Nodeupdate
    std::shared_ptr<camera_interface::msg::Nodeupdate_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Nodeupdate_ & other) const
  {
    if (this->node != other.node) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    return true;
  }
  bool operator!=(const Nodeupdate_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Nodeupdate_

// alias to use template instance with default allocator
using Nodeupdate =
  camera_interface::msg::Nodeupdate_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace camera_interface

#endif  // CAMERA_INTERFACE__MSG__NODEUPDATE__STRUCT_HPP_
