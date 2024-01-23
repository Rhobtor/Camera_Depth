// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from camera_interface:msg/Camera.idl
// generated code does not contain a copyright notice
#include "camera_interface/msg/camera__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `label`
#include "rosidl_generator_c/string_functions.h"
// Member `position`
// Member `dimensions`
// Member `velocity`
#include "rosidl_generator_c/primitives_sequence_functions.h"

bool
camera_interface__msg__Camera__init(camera_interface__msg__Camera * msg)
{
  if (!msg) {
    return false;
  }
  // id
  // label
  if (!rosidl_generator_c__String__init(&msg->label)) {
    camera_interface__msg__Camera__fini(msg);
    return false;
  }
  // position
  if (!rosidl_generator_c__double__Sequence__init(&msg->position, 0)) {
    camera_interface__msg__Camera__fini(msg);
    return false;
  }
  // confidence
  // dimensions
  if (!rosidl_generator_c__double__Sequence__init(&msg->dimensions, 0)) {
    camera_interface__msg__Camera__fini(msg);
    return false;
  }
  // velocity
  if (!rosidl_generator_c__double__Sequence__init(&msg->velocity, 0)) {
    camera_interface__msg__Camera__fini(msg);
    return false;
  }
  return true;
}

void
camera_interface__msg__Camera__fini(camera_interface__msg__Camera * msg)
{
  if (!msg) {
    return;
  }
  // id
  // label
  rosidl_generator_c__String__fini(&msg->label);
  // position
  rosidl_generator_c__double__Sequence__fini(&msg->position);
  // confidence
  // dimensions
  rosidl_generator_c__double__Sequence__fini(&msg->dimensions);
  // velocity
  rosidl_generator_c__double__Sequence__fini(&msg->velocity);
}

camera_interface__msg__Camera *
camera_interface__msg__Camera__create()
{
  camera_interface__msg__Camera * msg = (camera_interface__msg__Camera *)malloc(sizeof(camera_interface__msg__Camera));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(camera_interface__msg__Camera));
  bool success = camera_interface__msg__Camera__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
camera_interface__msg__Camera__destroy(camera_interface__msg__Camera * msg)
{
  if (msg) {
    camera_interface__msg__Camera__fini(msg);
  }
  free(msg);
}


bool
camera_interface__msg__Camera__Sequence__init(camera_interface__msg__Camera__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  camera_interface__msg__Camera * data = NULL;
  if (size) {
    data = (camera_interface__msg__Camera *)calloc(size, sizeof(camera_interface__msg__Camera));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = camera_interface__msg__Camera__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        camera_interface__msg__Camera__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
camera_interface__msg__Camera__Sequence__fini(camera_interface__msg__Camera__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      camera_interface__msg__Camera__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

camera_interface__msg__Camera__Sequence *
camera_interface__msg__Camera__Sequence__create(size_t size)
{
  camera_interface__msg__Camera__Sequence * array = (camera_interface__msg__Camera__Sequence *)malloc(sizeof(camera_interface__msg__Camera__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = camera_interface__msg__Camera__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
camera_interface__msg__Camera__Sequence__destroy(camera_interface__msg__Camera__Sequence * array)
{
  if (array) {
    camera_interface__msg__Camera__Sequence__fini(array);
  }
  free(array);
}
