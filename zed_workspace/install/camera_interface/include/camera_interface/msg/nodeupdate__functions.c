// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from camera_interface:msg/Nodeupdate.idl
// generated code does not contain a copyright notice
#include "camera_interface/msg/nodeupdate__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `node`
// Member `message`
#include "rosidl_generator_c/string_functions.h"

bool
camera_interface__msg__Nodeupdate__init(camera_interface__msg__Nodeupdate * msg)
{
  if (!msg) {
    return false;
  }
  // node
  if (!rosidl_generator_c__String__init(&msg->node)) {
    camera_interface__msg__Nodeupdate__fini(msg);
    return false;
  }
  // message
  if (!rosidl_generator_c__String__init(&msg->message)) {
    camera_interface__msg__Nodeupdate__fini(msg);
    return false;
  }
  return true;
}

void
camera_interface__msg__Nodeupdate__fini(camera_interface__msg__Nodeupdate * msg)
{
  if (!msg) {
    return;
  }
  // node
  rosidl_generator_c__String__fini(&msg->node);
  // message
  rosidl_generator_c__String__fini(&msg->message);
}

camera_interface__msg__Nodeupdate *
camera_interface__msg__Nodeupdate__create()
{
  camera_interface__msg__Nodeupdate * msg = (camera_interface__msg__Nodeupdate *)malloc(sizeof(camera_interface__msg__Nodeupdate));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(camera_interface__msg__Nodeupdate));
  bool success = camera_interface__msg__Nodeupdate__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
camera_interface__msg__Nodeupdate__destroy(camera_interface__msg__Nodeupdate * msg)
{
  if (msg) {
    camera_interface__msg__Nodeupdate__fini(msg);
  }
  free(msg);
}


bool
camera_interface__msg__Nodeupdate__Sequence__init(camera_interface__msg__Nodeupdate__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  camera_interface__msg__Nodeupdate * data = NULL;
  if (size) {
    data = (camera_interface__msg__Nodeupdate *)calloc(size, sizeof(camera_interface__msg__Nodeupdate));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = camera_interface__msg__Nodeupdate__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        camera_interface__msg__Nodeupdate__fini(&data[i - 1]);
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
camera_interface__msg__Nodeupdate__Sequence__fini(camera_interface__msg__Nodeupdate__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      camera_interface__msg__Nodeupdate__fini(&array->data[i]);
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

camera_interface__msg__Nodeupdate__Sequence *
camera_interface__msg__Nodeupdate__Sequence__create(size_t size)
{
  camera_interface__msg__Nodeupdate__Sequence * array = (camera_interface__msg__Nodeupdate__Sequence *)malloc(sizeof(camera_interface__msg__Nodeupdate__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = camera_interface__msg__Nodeupdate__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
camera_interface__msg__Nodeupdate__Sequence__destroy(camera_interface__msg__Nodeupdate__Sequence * array)
{
  if (array) {
    camera_interface__msg__Nodeupdate__Sequence__fini(array);
  }
  free(array);
}
