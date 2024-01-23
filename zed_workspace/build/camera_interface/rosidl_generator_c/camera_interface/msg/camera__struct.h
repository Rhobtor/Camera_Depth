// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from camera_interface:msg/Camera.idl
// generated code does not contain a copyright notice

#ifndef CAMERA_INTERFACE__MSG__CAMERA__STRUCT_H_
#define CAMERA_INTERFACE__MSG__CAMERA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'label'
#include "rosidl_generator_c/string.h"
// Member 'position'
// Member 'dimensions'
// Member 'velocity'
#include "rosidl_generator_c/primitives_sequence.h"

// Struct defined in msg/Camera in the package camera_interface.
typedef struct camera_interface__msg__Camera
{
  int64_t id;
  rosidl_generator_c__String label;
  rosidl_generator_c__double__Sequence position;
  double confidence;
  rosidl_generator_c__double__Sequence dimensions;
  rosidl_generator_c__double__Sequence velocity;
} camera_interface__msg__Camera;

// Struct for a sequence of camera_interface__msg__Camera.
typedef struct camera_interface__msg__Camera__Sequence
{
  camera_interface__msg__Camera * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} camera_interface__msg__Camera__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CAMERA_INTERFACE__MSG__CAMERA__STRUCT_H_
