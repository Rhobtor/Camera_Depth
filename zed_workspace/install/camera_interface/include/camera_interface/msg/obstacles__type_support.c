// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from camera_interface:msg/Obstacles.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "camera_interface/msg/obstacles__rosidl_typesupport_introspection_c.h"
#include "camera_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "camera_interface/msg/obstacles__functions.h"
#include "camera_interface/msg/obstacles__struct.h"


// Include directives for member types
// Member `objects`
#include "camera_interface/msg/camera.h"
// Member `objects`
#include "camera_interface/msg/camera__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Obstacles__rosidl_typesupport_introspection_c__Obstacles_init_function(
  void * message_memory, enum rosidl_runtime_c_message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  camera_interface__msg__Obstacles__init(message_memory);
}

void Obstacles__rosidl_typesupport_introspection_c__Obstacles_fini_function(void * message_memory)
{
  camera_interface__msg__Obstacles__fini(message_memory);
}

size_t Obstacles__rosidl_typesupport_introspection_c__size_function__Camera__objects(
  const void * untyped_member)
{
  const camera_interface__msg__Camera__Sequence * member =
    (const camera_interface__msg__Camera__Sequence *)(untyped_member);
  return member->size;
}

const void * Obstacles__rosidl_typesupport_introspection_c__get_const_function__Camera__objects(
  const void * untyped_member, size_t index)
{
  const camera_interface__msg__Camera__Sequence * member =
    (const camera_interface__msg__Camera__Sequence *)(untyped_member);
  return &member->data[index];
}

void * Obstacles__rosidl_typesupport_introspection_c__get_function__Camera__objects(
  void * untyped_member, size_t index)
{
  camera_interface__msg__Camera__Sequence * member =
    (camera_interface__msg__Camera__Sequence *)(untyped_member);
  return &member->data[index];
}

bool Obstacles__rosidl_typesupport_introspection_c__resize_function__Camera__objects(
  void * untyped_member, size_t size)
{
  camera_interface__msg__Camera__Sequence * member =
    (camera_interface__msg__Camera__Sequence *)(untyped_member);
  camera_interface__msg__Camera__Sequence__fini(member);
  return camera_interface__msg__Camera__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember Obstacles__rosidl_typesupport_introspection_c__Obstacles_message_member_array[2] = {
  {
    "angle_increment",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(camera_interface__msg__Obstacles, angle_increment),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "objects",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(camera_interface__msg__Obstacles, objects),  // bytes offset in struct
    NULL,  // default value
    Obstacles__rosidl_typesupport_introspection_c__size_function__Camera__objects,  // size() function pointer
    Obstacles__rosidl_typesupport_introspection_c__get_const_function__Camera__objects,  // get_const(index) function pointer
    Obstacles__rosidl_typesupport_introspection_c__get_function__Camera__objects,  // get(index) function pointer
    Obstacles__rosidl_typesupport_introspection_c__resize_function__Camera__objects  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Obstacles__rosidl_typesupport_introspection_c__Obstacles_message_members = {
  "camera_interface__msg",  // message namespace
  "Obstacles",  // message name
  2,  // number of fields
  sizeof(camera_interface__msg__Obstacles),
  Obstacles__rosidl_typesupport_introspection_c__Obstacles_message_member_array,  // message members
  Obstacles__rosidl_typesupport_introspection_c__Obstacles_init_function,  // function to initialize message memory (memory has to be allocated)
  Obstacles__rosidl_typesupport_introspection_c__Obstacles_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Obstacles__rosidl_typesupport_introspection_c__Obstacles_message_type_support_handle = {
  0,
  &Obstacles__rosidl_typesupport_introspection_c__Obstacles_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_camera_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, camera_interface, msg, Obstacles)() {
  Obstacles__rosidl_typesupport_introspection_c__Obstacles_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, camera_interface, msg, Camera)();
  if (!Obstacles__rosidl_typesupport_introspection_c__Obstacles_message_type_support_handle.typesupport_identifier) {
    Obstacles__rosidl_typesupport_introspection_c__Obstacles_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Obstacles__rosidl_typesupport_introspection_c__Obstacles_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
