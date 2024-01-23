// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from camera_interface:msg/Nodeupdate.idl
// generated code does not contain a copyright notice
#include "camera_interface/msg/nodeupdate__rosidl_typesupport_fastrtps_cpp.hpp"
#include "camera_interface/msg/nodeupdate__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace camera_interface
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_camera_interface
cdr_serialize(
  const camera_interface::msg::Nodeupdate & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: node
  cdr << ros_message.node;
  // Member: message
  cdr << ros_message.message;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_camera_interface
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  camera_interface::msg::Nodeupdate & ros_message)
{
  // Member: node
  cdr >> ros_message.node;

  // Member: message
  cdr >> ros_message.message;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_camera_interface
get_serialized_size(
  const camera_interface::msg::Nodeupdate & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: node
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.node.size() + 1);
  // Member: message
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.message.size() + 1);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_camera_interface
max_serialized_size_Nodeupdate(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: node
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: message
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  return current_alignment - initial_alignment;
}

static bool _Nodeupdate__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const camera_interface::msg::Nodeupdate *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Nodeupdate__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<camera_interface::msg::Nodeupdate *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Nodeupdate__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const camera_interface::msg::Nodeupdate *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Nodeupdate__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_Nodeupdate(full_bounded, 0);
}

static message_type_support_callbacks_t _Nodeupdate__callbacks = {
  "camera_interface::msg",
  "Nodeupdate",
  _Nodeupdate__cdr_serialize,
  _Nodeupdate__cdr_deserialize,
  _Nodeupdate__get_serialized_size,
  _Nodeupdate__max_serialized_size
};

static rosidl_message_type_support_t _Nodeupdate__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Nodeupdate__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace camera_interface

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_camera_interface
const rosidl_message_type_support_t *
get_message_type_support_handle<camera_interface::msg::Nodeupdate>()
{
  return &camera_interface::msg::typesupport_fastrtps_cpp::_Nodeupdate__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, camera_interface, msg, Nodeupdate)() {
  return &camera_interface::msg::typesupport_fastrtps_cpp::_Nodeupdate__handle;
}

#ifdef __cplusplus
}
#endif
