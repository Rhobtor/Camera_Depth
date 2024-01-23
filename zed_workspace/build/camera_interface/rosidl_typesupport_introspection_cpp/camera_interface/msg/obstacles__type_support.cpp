// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from camera_interface:msg/Obstacles.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_generator_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "camera_interface/msg/obstacles__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace camera_interface
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void Obstacles_init_function(
  void * message_memory, rosidl_generator_cpp::MessageInitialization _init)
{
  new (message_memory) camera_interface::msg::Obstacles(_init);
}

void Obstacles_fini_function(void * message_memory)
{
  auto typed_message = static_cast<camera_interface::msg::Obstacles *>(message_memory);
  typed_message->~Obstacles();
}

size_t size_function__Obstacles__objects(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<camera_interface::msg::Camera> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Obstacles__objects(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<camera_interface::msg::Camera> *>(untyped_member);
  return &member[index];
}

void * get_function__Obstacles__objects(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<camera_interface::msg::Camera> *>(untyped_member);
  return &member[index];
}

void resize_function__Obstacles__objects(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<camera_interface::msg::Camera> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Obstacles_message_member_array[2] = {
  {
    "angle_increment",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(camera_interface::msg::Obstacles, angle_increment),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "objects",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<camera_interface::msg::Camera>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(camera_interface::msg::Obstacles, objects),  // bytes offset in struct
    nullptr,  // default value
    size_function__Obstacles__objects,  // size() function pointer
    get_const_function__Obstacles__objects,  // get_const(index) function pointer
    get_function__Obstacles__objects,  // get(index) function pointer
    resize_function__Obstacles__objects  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Obstacles_message_members = {
  "camera_interface::msg",  // message namespace
  "Obstacles",  // message name
  2,  // number of fields
  sizeof(camera_interface::msg::Obstacles),
  Obstacles_message_member_array,  // message members
  Obstacles_init_function,  // function to initialize message memory (memory has to be allocated)
  Obstacles_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Obstacles_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Obstacles_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace camera_interface


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<camera_interface::msg::Obstacles>()
{
  return &::camera_interface::msg::rosidl_typesupport_introspection_cpp::Obstacles_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, camera_interface, msg, Obstacles)() {
  return &::camera_interface::msg::rosidl_typesupport_introspection_cpp::Obstacles_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
