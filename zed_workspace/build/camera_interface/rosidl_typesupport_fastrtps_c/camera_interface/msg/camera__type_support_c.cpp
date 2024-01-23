// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from camera_interface:msg/Camera.idl
// generated code does not contain a copyright notice
#include "camera_interface/msg/camera__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "camera_interface/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "camera_interface/msg/camera__struct.h"
#include "camera_interface/msg/camera__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_generator_c/primitives_sequence.h"  // dimensions, position, velocity
#include "rosidl_generator_c/primitives_sequence_functions.h"  // dimensions, position, velocity
#include "rosidl_generator_c/string.h"  // label
#include "rosidl_generator_c/string_functions.h"  // label

// forward declare type support functions


using _Camera__ros_msg_type = camera_interface__msg__Camera;

static bool _Camera__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Camera__ros_msg_type * ros_message = static_cast<const _Camera__ros_msg_type *>(untyped_ros_message);
  // Field name: id
  {
    cdr << ros_message->id;
  }

  // Field name: label
  {
    const rosidl_generator_c__String * str = &ros_message->label;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: position
  {
    size_t size = ros_message->position.size;
    auto array_ptr = ros_message->position.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: confidence
  {
    cdr << ros_message->confidence;
  }

  // Field name: dimensions
  {
    size_t size = ros_message->dimensions.size;
    auto array_ptr = ros_message->dimensions.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: velocity
  {
    size_t size = ros_message->velocity.size;
    auto array_ptr = ros_message->velocity.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  return true;
}

static bool _Camera__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Camera__ros_msg_type * ros_message = static_cast<_Camera__ros_msg_type *>(untyped_ros_message);
  // Field name: id
  {
    cdr >> ros_message->id;
  }

  // Field name: label
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->label.data) {
      rosidl_generator_c__String__init(&ros_message->label);
    }
    bool succeeded = rosidl_generator_c__String__assign(
      &ros_message->label,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'label'\n");
      return false;
    }
  }

  // Field name: position
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->position.data) {
      rosidl_generator_c__double__Sequence__fini(&ros_message->position);
    }
    if (!rosidl_generator_c__double__Sequence__init(&ros_message->position, size)) {
      return "failed to create array for field 'position'";
    }
    auto array_ptr = ros_message->position.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: confidence
  {
    cdr >> ros_message->confidence;
  }

  // Field name: dimensions
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->dimensions.data) {
      rosidl_generator_c__double__Sequence__fini(&ros_message->dimensions);
    }
    if (!rosidl_generator_c__double__Sequence__init(&ros_message->dimensions, size)) {
      return "failed to create array for field 'dimensions'";
    }
    auto array_ptr = ros_message->dimensions.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: velocity
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->velocity.data) {
      rosidl_generator_c__double__Sequence__fini(&ros_message->velocity);
    }
    if (!rosidl_generator_c__double__Sequence__init(&ros_message->velocity, size)) {
      return "failed to create array for field 'velocity'";
    }
    auto array_ptr = ros_message->velocity.data;
    cdr.deserializeArray(array_ptr, size);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_camera_interface
size_t get_serialized_size_camera_interface__msg__Camera(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Camera__ros_msg_type * ros_message = static_cast<const _Camera__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name id
  {
    size_t item_size = sizeof(ros_message->id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name label
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->label.size + 1);
  // field.name position
  {
    size_t array_size = ros_message->position.size;
    auto array_ptr = ros_message->position.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name confidence
  {
    size_t item_size = sizeof(ros_message->confidence);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name dimensions
  {
    size_t array_size = ros_message->dimensions.size;
    auto array_ptr = ros_message->dimensions.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name velocity
  {
    size_t array_size = ros_message->velocity.size;
    auto array_ptr = ros_message->velocity.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Camera__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_camera_interface__msg__Camera(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_camera_interface
size_t max_serialized_size_camera_interface__msg__Camera(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: label
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: position
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: confidence
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: dimensions
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: velocity
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _Camera__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_camera_interface__msg__Camera(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_Camera = {
  "camera_interface::msg",
  "Camera",
  _Camera__cdr_serialize,
  _Camera__cdr_deserialize,
  _Camera__get_serialized_size,
  _Camera__max_serialized_size
};

static rosidl_message_type_support_t _Camera__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Camera,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, camera_interface, msg, Camera)() {
  return &_Camera__type_support;
}

#if defined(__cplusplus)
}
#endif
