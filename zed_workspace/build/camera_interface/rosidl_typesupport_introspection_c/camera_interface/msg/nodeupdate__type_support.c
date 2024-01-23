// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from camera_interface:msg/Nodeupdate.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "camera_interface/msg/nodeupdate__rosidl_typesupport_introspection_c.h"
#include "camera_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "camera_interface/msg/nodeupdate__functions.h"
#include "camera_interface/msg/nodeupdate__struct.h"


// Include directives for member types
// Member `node`
// Member `message`
#include "rosidl_generator_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Nodeupdate__rosidl_typesupport_introspection_c__Nodeupdate_init_function(
  void * message_memory, enum rosidl_runtime_c_message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  camera_interface__msg__Nodeupdate__init(message_memory);
}

void Nodeupdate__rosidl_typesupport_introspection_c__Nodeupdate_fini_function(void * message_memory)
{
  camera_interface__msg__Nodeupdate__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Nodeupdate__rosidl_typesupport_introspection_c__Nodeupdate_message_member_array[2] = {
  {
    "node",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(camera_interface__msg__Nodeupdate, node),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "message",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(camera_interface__msg__Nodeupdate, message),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Nodeupdate__rosidl_typesupport_introspection_c__Nodeupdate_message_members = {
  "camera_interface__msg",  // message namespace
  "Nodeupdate",  // message name
  2,  // number of fields
  sizeof(camera_interface__msg__Nodeupdate),
  Nodeupdate__rosidl_typesupport_introspection_c__Nodeupdate_message_member_array,  // message members
  Nodeupdate__rosidl_typesupport_introspection_c__Nodeupdate_init_function,  // function to initialize message memory (memory has to be allocated)
  Nodeupdate__rosidl_typesupport_introspection_c__Nodeupdate_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Nodeupdate__rosidl_typesupport_introspection_c__Nodeupdate_message_type_support_handle = {
  0,
  &Nodeupdate__rosidl_typesupport_introspection_c__Nodeupdate_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_camera_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, camera_interface, msg, Nodeupdate)() {
  if (!Nodeupdate__rosidl_typesupport_introspection_c__Nodeupdate_message_type_support_handle.typesupport_identifier) {
    Nodeupdate__rosidl_typesupport_introspection_c__Nodeupdate_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Nodeupdate__rosidl_typesupport_introspection_c__Nodeupdate_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
