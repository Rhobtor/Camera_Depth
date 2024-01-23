// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from camera_interface:msg/Obstacles.idl
// generated code does not contain a copyright notice

#ifndef CAMERA_INTERFACE__MSG__OBSTACLES__STRUCT_H_
#define CAMERA_INTERFACE__MSG__OBSTACLES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'objects'
#include "camera_interface/msg/camera__struct.h"

// Struct defined in msg/Obstacles in the package camera_interface.
typedef struct camera_interface__msg__Obstacles
{
  double angle_increment;
  camera_interface__msg__Camera__Sequence objects;
} camera_interface__msg__Obstacles;

// Struct for a sequence of camera_interface__msg__Obstacles.
typedef struct camera_interface__msg__Obstacles__Sequence
{
  camera_interface__msg__Obstacles * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} camera_interface__msg__Obstacles__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CAMERA_INTERFACE__MSG__OBSTACLES__STRUCT_H_
