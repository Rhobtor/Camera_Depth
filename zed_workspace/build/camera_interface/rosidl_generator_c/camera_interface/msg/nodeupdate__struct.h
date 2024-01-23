// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from camera_interface:msg/Nodeupdate.idl
// generated code does not contain a copyright notice

#ifndef CAMERA_INTERFACE__MSG__NODEUPDATE__STRUCT_H_
#define CAMERA_INTERFACE__MSG__NODEUPDATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'node'
// Member 'message'
#include "rosidl_generator_c/string.h"

// Struct defined in msg/Nodeupdate in the package camera_interface.
typedef struct camera_interface__msg__Nodeupdate
{
  rosidl_generator_c__String node;
  rosidl_generator_c__String message;
} camera_interface__msg__Nodeupdate;

// Struct for a sequence of camera_interface__msg__Nodeupdate.
typedef struct camera_interface__msg__Nodeupdate__Sequence
{
  camera_interface__msg__Nodeupdate * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} camera_interface__msg__Nodeupdate__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CAMERA_INTERFACE__MSG__NODEUPDATE__STRUCT_H_
