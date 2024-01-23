// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from camera_interface:msg/Camera.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "camera_interface/msg/camera__rosidl_typesupport_introspection_c.h"
#include "camera_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "camera_interface/msg/camera__functions.h"
#include "camera_interface/msg/camera__struct.h"


// Include directives for member types
// Member `label`
#include "rosidl_generator_c/string_functions.h"
// Member `position`
// Member `dimensions`
// Member `velocity`
#include "rosidl_generator_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Camera__rosidl_typesupport_introspection_c__Camera_init_function(
  void * message_memory, enum rosidl_runtime_c_message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  camera_interface__msg__Camera__init(message_memory);
}

void Camera__rosidl_typesupport_introspection_c__Camera_fini_function(void * message_memory)
{
  camera_interface__msg__Camera__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Camera__rosidl_typesupport_introspection_c__Camera_message_member_array[6] = {
  {
    "id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(camera_interface__msg__Camera, id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "label",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(camera_interface__msg__Camera, label),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "position",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(camera_interface__msg__Camera, position),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "confidence",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(camera_interface__msg__Camera, confidence),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "dimensions",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(camera_interface__msg__Camera, dimensions),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "velocity",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(camera_interface__msg__Camera, velocity),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Camera__rosidl_typesupport_introspection_c__Camera_message_members = {
  "camera_interface__msg",  // message namespace
  "Camera",  // message name
  6,  // number of fields
  sizeof(camera_interface__msg__Camera),
  Camera__rosidl_typesupport_introspection_c__Camera_message_member_array,  // message members
  Camera__rosidl_typesupport_introspection_c__Camera_init_function,  // function to initialize message memory (memory has to be allocated)
  Camera__rosidl_typesupport_introspection_c__Camera_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Camera__rosidl_typesupport_introspection_c__Camera_message_type_support_handle = {
  0,
  &Camera__rosidl_typesupport_introspection_c__Camera_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_camera_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, camera_interface, msg, Camera)() {
  if (!Camera__rosidl_typesupport_introspection_c__Camera_message_type_support_handle.typesupport_identifier) {
    Camera__rosidl_typesupport_introspection_c__Camera_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Camera__rosidl_typesupport_introspection_c__Camera_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
