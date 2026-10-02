// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from tribonacci_interfaces:action/Tribonacci.idl
// generated code does not contain a copyright notice
#include "tribonacci_interfaces/action/detail/tribonacci__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
tribonacci_interfaces__action__Tribonacci_Goal__init(tribonacci_interfaces__action__Tribonacci_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // start
  return true;
}

void
tribonacci_interfaces__action__Tribonacci_Goal__fini(tribonacci_interfaces__action__Tribonacci_Goal * msg)
{
  if (!msg) {
    return;
  }
  // start
}

bool
tribonacci_interfaces__action__Tribonacci_Goal__are_equal(const tribonacci_interfaces__action__Tribonacci_Goal * lhs, const tribonacci_interfaces__action__Tribonacci_Goal * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // start
  if (lhs->start != rhs->start) {
    return false;
  }
  return true;
}

bool
tribonacci_interfaces__action__Tribonacci_Goal__copy(
  const tribonacci_interfaces__action__Tribonacci_Goal * input,
  tribonacci_interfaces__action__Tribonacci_Goal * output)
{
  if (!input || !output) {
    return false;
  }
  // start
  output->start = input->start;
  return true;
}

tribonacci_interfaces__action__Tribonacci_Goal *
tribonacci_interfaces__action__Tribonacci_Goal__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tribonacci_interfaces__action__Tribonacci_Goal * msg = (tribonacci_interfaces__action__Tribonacci_Goal *)allocator.allocate(sizeof(tribonacci_interfaces__action__Tribonacci_Goal), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tribonacci_interfaces__action__Tribonacci_Goal));
  bool success = tribonacci_interfaces__action__Tribonacci_Goal__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
tribonacci_interfaces__action__Tribonacci_Goal__destroy(tribonacci_interfaces__action__Tribonacci_Goal * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    tribonacci_interfaces__action__Tribonacci_Goal__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
tribonacci_interfaces__action__Tribonacci_Goal__Sequence__init(tribonacci_interfaces__action__Tribonacci_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tribonacci_interfaces__action__Tribonacci_Goal * data = NULL;

  if (size) {
    data = (tribonacci_interfaces__action__Tribonacci_Goal *)allocator.zero_allocate(size, sizeof(tribonacci_interfaces__action__Tribonacci_Goal), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tribonacci_interfaces__action__Tribonacci_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tribonacci_interfaces__action__Tribonacci_Goal__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
tribonacci_interfaces__action__Tribonacci_Goal__Sequence__fini(tribonacci_interfaces__action__Tribonacci_Goal__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      tribonacci_interfaces__action__Tribonacci_Goal__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

tribonacci_interfaces__action__Tribonacci_Goal__Sequence *
tribonacci_interfaces__action__Tribonacci_Goal__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tribonacci_interfaces__action__Tribonacci_Goal__Sequence * array = (tribonacci_interfaces__action__Tribonacci_Goal__Sequence *)allocator.allocate(sizeof(tribonacci_interfaces__action__Tribonacci_Goal__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = tribonacci_interfaces__action__Tribonacci_Goal__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
tribonacci_interfaces__action__Tribonacci_Goal__Sequence__destroy(tribonacci_interfaces__action__Tribonacci_Goal__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    tribonacci_interfaces__action__Tribonacci_Goal__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
tribonacci_interfaces__action__Tribonacci_Goal__Sequence__are_equal(const tribonacci_interfaces__action__Tribonacci_Goal__Sequence * lhs, const tribonacci_interfaces__action__Tribonacci_Goal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tribonacci_interfaces__action__Tribonacci_Goal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tribonacci_interfaces__action__Tribonacci_Goal__Sequence__copy(
  const tribonacci_interfaces__action__Tribonacci_Goal__Sequence * input,
  tribonacci_interfaces__action__Tribonacci_Goal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tribonacci_interfaces__action__Tribonacci_Goal);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    tribonacci_interfaces__action__Tribonacci_Goal * data =
      (tribonacci_interfaces__action__Tribonacci_Goal *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tribonacci_interfaces__action__Tribonacci_Goal__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          tribonacci_interfaces__action__Tribonacci_Goal__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!tribonacci_interfaces__action__Tribonacci_Goal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `sequence`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
tribonacci_interfaces__action__Tribonacci_Result__init(tribonacci_interfaces__action__Tribonacci_Result * msg)
{
  if (!msg) {
    return false;
  }
  // sequence
  if (!rosidl_runtime_c__int64__Sequence__init(&msg->sequence, 0)) {
    tribonacci_interfaces__action__Tribonacci_Result__fini(msg);
    return false;
  }
  return true;
}

void
tribonacci_interfaces__action__Tribonacci_Result__fini(tribonacci_interfaces__action__Tribonacci_Result * msg)
{
  if (!msg) {
    return;
  }
  // sequence
  rosidl_runtime_c__int64__Sequence__fini(&msg->sequence);
}

bool
tribonacci_interfaces__action__Tribonacci_Result__are_equal(const tribonacci_interfaces__action__Tribonacci_Result * lhs, const tribonacci_interfaces__action__Tribonacci_Result * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // sequence
  if (!rosidl_runtime_c__int64__Sequence__are_equal(
      &(lhs->sequence), &(rhs->sequence)))
  {
    return false;
  }
  return true;
}

bool
tribonacci_interfaces__action__Tribonacci_Result__copy(
  const tribonacci_interfaces__action__Tribonacci_Result * input,
  tribonacci_interfaces__action__Tribonacci_Result * output)
{
  if (!input || !output) {
    return false;
  }
  // sequence
  if (!rosidl_runtime_c__int64__Sequence__copy(
      &(input->sequence), &(output->sequence)))
  {
    return false;
  }
  return true;
}

tribonacci_interfaces__action__Tribonacci_Result *
tribonacci_interfaces__action__Tribonacci_Result__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tribonacci_interfaces__action__Tribonacci_Result * msg = (tribonacci_interfaces__action__Tribonacci_Result *)allocator.allocate(sizeof(tribonacci_interfaces__action__Tribonacci_Result), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tribonacci_interfaces__action__Tribonacci_Result));
  bool success = tribonacci_interfaces__action__Tribonacci_Result__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
tribonacci_interfaces__action__Tribonacci_Result__destroy(tribonacci_interfaces__action__Tribonacci_Result * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    tribonacci_interfaces__action__Tribonacci_Result__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
tribonacci_interfaces__action__Tribonacci_Result__Sequence__init(tribonacci_interfaces__action__Tribonacci_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tribonacci_interfaces__action__Tribonacci_Result * data = NULL;

  if (size) {
    data = (tribonacci_interfaces__action__Tribonacci_Result *)allocator.zero_allocate(size, sizeof(tribonacci_interfaces__action__Tribonacci_Result), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tribonacci_interfaces__action__Tribonacci_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tribonacci_interfaces__action__Tribonacci_Result__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
tribonacci_interfaces__action__Tribonacci_Result__Sequence__fini(tribonacci_interfaces__action__Tribonacci_Result__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      tribonacci_interfaces__action__Tribonacci_Result__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

tribonacci_interfaces__action__Tribonacci_Result__Sequence *
tribonacci_interfaces__action__Tribonacci_Result__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tribonacci_interfaces__action__Tribonacci_Result__Sequence * array = (tribonacci_interfaces__action__Tribonacci_Result__Sequence *)allocator.allocate(sizeof(tribonacci_interfaces__action__Tribonacci_Result__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = tribonacci_interfaces__action__Tribonacci_Result__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
tribonacci_interfaces__action__Tribonacci_Result__Sequence__destroy(tribonacci_interfaces__action__Tribonacci_Result__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    tribonacci_interfaces__action__Tribonacci_Result__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
tribonacci_interfaces__action__Tribonacci_Result__Sequence__are_equal(const tribonacci_interfaces__action__Tribonacci_Result__Sequence * lhs, const tribonacci_interfaces__action__Tribonacci_Result__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tribonacci_interfaces__action__Tribonacci_Result__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tribonacci_interfaces__action__Tribonacci_Result__Sequence__copy(
  const tribonacci_interfaces__action__Tribonacci_Result__Sequence * input,
  tribonacci_interfaces__action__Tribonacci_Result__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tribonacci_interfaces__action__Tribonacci_Result);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    tribonacci_interfaces__action__Tribonacci_Result * data =
      (tribonacci_interfaces__action__Tribonacci_Result *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tribonacci_interfaces__action__Tribonacci_Result__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          tribonacci_interfaces__action__Tribonacci_Result__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!tribonacci_interfaces__action__Tribonacci_Result__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
tribonacci_interfaces__action__Tribonacci_Feedback__init(tribonacci_interfaces__action__Tribonacci_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // current_index
  // current_number
  return true;
}

void
tribonacci_interfaces__action__Tribonacci_Feedback__fini(tribonacci_interfaces__action__Tribonacci_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // current_index
  // current_number
}

bool
tribonacci_interfaces__action__Tribonacci_Feedback__are_equal(const tribonacci_interfaces__action__Tribonacci_Feedback * lhs, const tribonacci_interfaces__action__Tribonacci_Feedback * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // current_index
  if (lhs->current_index != rhs->current_index) {
    return false;
  }
  // current_number
  if (lhs->current_number != rhs->current_number) {
    return false;
  }
  return true;
}

bool
tribonacci_interfaces__action__Tribonacci_Feedback__copy(
  const tribonacci_interfaces__action__Tribonacci_Feedback * input,
  tribonacci_interfaces__action__Tribonacci_Feedback * output)
{
  if (!input || !output) {
    return false;
  }
  // current_index
  output->current_index = input->current_index;
  // current_number
  output->current_number = input->current_number;
  return true;
}

tribonacci_interfaces__action__Tribonacci_Feedback *
tribonacci_interfaces__action__Tribonacci_Feedback__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tribonacci_interfaces__action__Tribonacci_Feedback * msg = (tribonacci_interfaces__action__Tribonacci_Feedback *)allocator.allocate(sizeof(tribonacci_interfaces__action__Tribonacci_Feedback), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tribonacci_interfaces__action__Tribonacci_Feedback));
  bool success = tribonacci_interfaces__action__Tribonacci_Feedback__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
tribonacci_interfaces__action__Tribonacci_Feedback__destroy(tribonacci_interfaces__action__Tribonacci_Feedback * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    tribonacci_interfaces__action__Tribonacci_Feedback__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
tribonacci_interfaces__action__Tribonacci_Feedback__Sequence__init(tribonacci_interfaces__action__Tribonacci_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tribonacci_interfaces__action__Tribonacci_Feedback * data = NULL;

  if (size) {
    data = (tribonacci_interfaces__action__Tribonacci_Feedback *)allocator.zero_allocate(size, sizeof(tribonacci_interfaces__action__Tribonacci_Feedback), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tribonacci_interfaces__action__Tribonacci_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tribonacci_interfaces__action__Tribonacci_Feedback__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
tribonacci_interfaces__action__Tribonacci_Feedback__Sequence__fini(tribonacci_interfaces__action__Tribonacci_Feedback__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      tribonacci_interfaces__action__Tribonacci_Feedback__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

tribonacci_interfaces__action__Tribonacci_Feedback__Sequence *
tribonacci_interfaces__action__Tribonacci_Feedback__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tribonacci_interfaces__action__Tribonacci_Feedback__Sequence * array = (tribonacci_interfaces__action__Tribonacci_Feedback__Sequence *)allocator.allocate(sizeof(tribonacci_interfaces__action__Tribonacci_Feedback__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = tribonacci_interfaces__action__Tribonacci_Feedback__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
tribonacci_interfaces__action__Tribonacci_Feedback__Sequence__destroy(tribonacci_interfaces__action__Tribonacci_Feedback__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    tribonacci_interfaces__action__Tribonacci_Feedback__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
tribonacci_interfaces__action__Tribonacci_Feedback__Sequence__are_equal(const tribonacci_interfaces__action__Tribonacci_Feedback__Sequence * lhs, const tribonacci_interfaces__action__Tribonacci_Feedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tribonacci_interfaces__action__Tribonacci_Feedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tribonacci_interfaces__action__Tribonacci_Feedback__Sequence__copy(
  const tribonacci_interfaces__action__Tribonacci_Feedback__Sequence * input,
  tribonacci_interfaces__action__Tribonacci_Feedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tribonacci_interfaces__action__Tribonacci_Feedback);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    tribonacci_interfaces__action__Tribonacci_Feedback * data =
      (tribonacci_interfaces__action__Tribonacci_Feedback *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tribonacci_interfaces__action__Tribonacci_Feedback__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          tribonacci_interfaces__action__Tribonacci_Feedback__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!tribonacci_interfaces__action__Tribonacci_Feedback__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `goal`
// already included above
// #include "tribonacci_interfaces/action/detail/tribonacci__functions.h"

bool
tribonacci_interfaces__action__Tribonacci_SendGoal_Request__init(tribonacci_interfaces__action__Tribonacci_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    tribonacci_interfaces__action__Tribonacci_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!tribonacci_interfaces__action__Tribonacci_Goal__init(&msg->goal)) {
    tribonacci_interfaces__action__Tribonacci_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
tribonacci_interfaces__action__Tribonacci_SendGoal_Request__fini(tribonacci_interfaces__action__Tribonacci_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  tribonacci_interfaces__action__Tribonacci_Goal__fini(&msg->goal);
}

bool
tribonacci_interfaces__action__Tribonacci_SendGoal_Request__are_equal(const tribonacci_interfaces__action__Tribonacci_SendGoal_Request * lhs, const tribonacci_interfaces__action__Tribonacci_SendGoal_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // goal
  if (!tribonacci_interfaces__action__Tribonacci_Goal__are_equal(
      &(lhs->goal), &(rhs->goal)))
  {
    return false;
  }
  return true;
}

bool
tribonacci_interfaces__action__Tribonacci_SendGoal_Request__copy(
  const tribonacci_interfaces__action__Tribonacci_SendGoal_Request * input,
  tribonacci_interfaces__action__Tribonacci_SendGoal_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // goal
  if (!tribonacci_interfaces__action__Tribonacci_Goal__copy(
      &(input->goal), &(output->goal)))
  {
    return false;
  }
  return true;
}

tribonacci_interfaces__action__Tribonacci_SendGoal_Request *
tribonacci_interfaces__action__Tribonacci_SendGoal_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tribonacci_interfaces__action__Tribonacci_SendGoal_Request * msg = (tribonacci_interfaces__action__Tribonacci_SendGoal_Request *)allocator.allocate(sizeof(tribonacci_interfaces__action__Tribonacci_SendGoal_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tribonacci_interfaces__action__Tribonacci_SendGoal_Request));
  bool success = tribonacci_interfaces__action__Tribonacci_SendGoal_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
tribonacci_interfaces__action__Tribonacci_SendGoal_Request__destroy(tribonacci_interfaces__action__Tribonacci_SendGoal_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    tribonacci_interfaces__action__Tribonacci_SendGoal_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
tribonacci_interfaces__action__Tribonacci_SendGoal_Request__Sequence__init(tribonacci_interfaces__action__Tribonacci_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tribonacci_interfaces__action__Tribonacci_SendGoal_Request * data = NULL;

  if (size) {
    data = (tribonacci_interfaces__action__Tribonacci_SendGoal_Request *)allocator.zero_allocate(size, sizeof(tribonacci_interfaces__action__Tribonacci_SendGoal_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tribonacci_interfaces__action__Tribonacci_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tribonacci_interfaces__action__Tribonacci_SendGoal_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
tribonacci_interfaces__action__Tribonacci_SendGoal_Request__Sequence__fini(tribonacci_interfaces__action__Tribonacci_SendGoal_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      tribonacci_interfaces__action__Tribonacci_SendGoal_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

tribonacci_interfaces__action__Tribonacci_SendGoal_Request__Sequence *
tribonacci_interfaces__action__Tribonacci_SendGoal_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tribonacci_interfaces__action__Tribonacci_SendGoal_Request__Sequence * array = (tribonacci_interfaces__action__Tribonacci_SendGoal_Request__Sequence *)allocator.allocate(sizeof(tribonacci_interfaces__action__Tribonacci_SendGoal_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = tribonacci_interfaces__action__Tribonacci_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
tribonacci_interfaces__action__Tribonacci_SendGoal_Request__Sequence__destroy(tribonacci_interfaces__action__Tribonacci_SendGoal_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    tribonacci_interfaces__action__Tribonacci_SendGoal_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
tribonacci_interfaces__action__Tribonacci_SendGoal_Request__Sequence__are_equal(const tribonacci_interfaces__action__Tribonacci_SendGoal_Request__Sequence * lhs, const tribonacci_interfaces__action__Tribonacci_SendGoal_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tribonacci_interfaces__action__Tribonacci_SendGoal_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tribonacci_interfaces__action__Tribonacci_SendGoal_Request__Sequence__copy(
  const tribonacci_interfaces__action__Tribonacci_SendGoal_Request__Sequence * input,
  tribonacci_interfaces__action__Tribonacci_SendGoal_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tribonacci_interfaces__action__Tribonacci_SendGoal_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    tribonacci_interfaces__action__Tribonacci_SendGoal_Request * data =
      (tribonacci_interfaces__action__Tribonacci_SendGoal_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tribonacci_interfaces__action__Tribonacci_SendGoal_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          tribonacci_interfaces__action__Tribonacci_SendGoal_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!tribonacci_interfaces__action__Tribonacci_SendGoal_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
tribonacci_interfaces__action__Tribonacci_SendGoal_Response__init(tribonacci_interfaces__action__Tribonacci_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    tribonacci_interfaces__action__Tribonacci_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
tribonacci_interfaces__action__Tribonacci_SendGoal_Response__fini(tribonacci_interfaces__action__Tribonacci_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

bool
tribonacci_interfaces__action__Tribonacci_SendGoal_Response__are_equal(const tribonacci_interfaces__action__Tribonacci_SendGoal_Response * lhs, const tribonacci_interfaces__action__Tribonacci_SendGoal_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // accepted
  if (lhs->accepted != rhs->accepted) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  return true;
}

bool
tribonacci_interfaces__action__Tribonacci_SendGoal_Response__copy(
  const tribonacci_interfaces__action__Tribonacci_SendGoal_Response * input,
  tribonacci_interfaces__action__Tribonacci_SendGoal_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // accepted
  output->accepted = input->accepted;
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  return true;
}

tribonacci_interfaces__action__Tribonacci_SendGoal_Response *
tribonacci_interfaces__action__Tribonacci_SendGoal_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tribonacci_interfaces__action__Tribonacci_SendGoal_Response * msg = (tribonacci_interfaces__action__Tribonacci_SendGoal_Response *)allocator.allocate(sizeof(tribonacci_interfaces__action__Tribonacci_SendGoal_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tribonacci_interfaces__action__Tribonacci_SendGoal_Response));
  bool success = tribonacci_interfaces__action__Tribonacci_SendGoal_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
tribonacci_interfaces__action__Tribonacci_SendGoal_Response__destroy(tribonacci_interfaces__action__Tribonacci_SendGoal_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    tribonacci_interfaces__action__Tribonacci_SendGoal_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
tribonacci_interfaces__action__Tribonacci_SendGoal_Response__Sequence__init(tribonacci_interfaces__action__Tribonacci_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tribonacci_interfaces__action__Tribonacci_SendGoal_Response * data = NULL;

  if (size) {
    data = (tribonacci_interfaces__action__Tribonacci_SendGoal_Response *)allocator.zero_allocate(size, sizeof(tribonacci_interfaces__action__Tribonacci_SendGoal_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tribonacci_interfaces__action__Tribonacci_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tribonacci_interfaces__action__Tribonacci_SendGoal_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
tribonacci_interfaces__action__Tribonacci_SendGoal_Response__Sequence__fini(tribonacci_interfaces__action__Tribonacci_SendGoal_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      tribonacci_interfaces__action__Tribonacci_SendGoal_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

tribonacci_interfaces__action__Tribonacci_SendGoal_Response__Sequence *
tribonacci_interfaces__action__Tribonacci_SendGoal_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tribonacci_interfaces__action__Tribonacci_SendGoal_Response__Sequence * array = (tribonacci_interfaces__action__Tribonacci_SendGoal_Response__Sequence *)allocator.allocate(sizeof(tribonacci_interfaces__action__Tribonacci_SendGoal_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = tribonacci_interfaces__action__Tribonacci_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
tribonacci_interfaces__action__Tribonacci_SendGoal_Response__Sequence__destroy(tribonacci_interfaces__action__Tribonacci_SendGoal_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    tribonacci_interfaces__action__Tribonacci_SendGoal_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
tribonacci_interfaces__action__Tribonacci_SendGoal_Response__Sequence__are_equal(const tribonacci_interfaces__action__Tribonacci_SendGoal_Response__Sequence * lhs, const tribonacci_interfaces__action__Tribonacci_SendGoal_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tribonacci_interfaces__action__Tribonacci_SendGoal_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tribonacci_interfaces__action__Tribonacci_SendGoal_Response__Sequence__copy(
  const tribonacci_interfaces__action__Tribonacci_SendGoal_Response__Sequence * input,
  tribonacci_interfaces__action__Tribonacci_SendGoal_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tribonacci_interfaces__action__Tribonacci_SendGoal_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    tribonacci_interfaces__action__Tribonacci_SendGoal_Response * data =
      (tribonacci_interfaces__action__Tribonacci_SendGoal_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tribonacci_interfaces__action__Tribonacci_SendGoal_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          tribonacci_interfaces__action__Tribonacci_SendGoal_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!tribonacci_interfaces__action__Tribonacci_SendGoal_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"

bool
tribonacci_interfaces__action__Tribonacci_GetResult_Request__init(tribonacci_interfaces__action__Tribonacci_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    tribonacci_interfaces__action__Tribonacci_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
tribonacci_interfaces__action__Tribonacci_GetResult_Request__fini(tribonacci_interfaces__action__Tribonacci_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

bool
tribonacci_interfaces__action__Tribonacci_GetResult_Request__are_equal(const tribonacci_interfaces__action__Tribonacci_GetResult_Request * lhs, const tribonacci_interfaces__action__Tribonacci_GetResult_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  return true;
}

bool
tribonacci_interfaces__action__Tribonacci_GetResult_Request__copy(
  const tribonacci_interfaces__action__Tribonacci_GetResult_Request * input,
  tribonacci_interfaces__action__Tribonacci_GetResult_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  return true;
}

tribonacci_interfaces__action__Tribonacci_GetResult_Request *
tribonacci_interfaces__action__Tribonacci_GetResult_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tribonacci_interfaces__action__Tribonacci_GetResult_Request * msg = (tribonacci_interfaces__action__Tribonacci_GetResult_Request *)allocator.allocate(sizeof(tribonacci_interfaces__action__Tribonacci_GetResult_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tribonacci_interfaces__action__Tribonacci_GetResult_Request));
  bool success = tribonacci_interfaces__action__Tribonacci_GetResult_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
tribonacci_interfaces__action__Tribonacci_GetResult_Request__destroy(tribonacci_interfaces__action__Tribonacci_GetResult_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    tribonacci_interfaces__action__Tribonacci_GetResult_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
tribonacci_interfaces__action__Tribonacci_GetResult_Request__Sequence__init(tribonacci_interfaces__action__Tribonacci_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tribonacci_interfaces__action__Tribonacci_GetResult_Request * data = NULL;

  if (size) {
    data = (tribonacci_interfaces__action__Tribonacci_GetResult_Request *)allocator.zero_allocate(size, sizeof(tribonacci_interfaces__action__Tribonacci_GetResult_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tribonacci_interfaces__action__Tribonacci_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tribonacci_interfaces__action__Tribonacci_GetResult_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
tribonacci_interfaces__action__Tribonacci_GetResult_Request__Sequence__fini(tribonacci_interfaces__action__Tribonacci_GetResult_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      tribonacci_interfaces__action__Tribonacci_GetResult_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

tribonacci_interfaces__action__Tribonacci_GetResult_Request__Sequence *
tribonacci_interfaces__action__Tribonacci_GetResult_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tribonacci_interfaces__action__Tribonacci_GetResult_Request__Sequence * array = (tribonacci_interfaces__action__Tribonacci_GetResult_Request__Sequence *)allocator.allocate(sizeof(tribonacci_interfaces__action__Tribonacci_GetResult_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = tribonacci_interfaces__action__Tribonacci_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
tribonacci_interfaces__action__Tribonacci_GetResult_Request__Sequence__destroy(tribonacci_interfaces__action__Tribonacci_GetResult_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    tribonacci_interfaces__action__Tribonacci_GetResult_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
tribonacci_interfaces__action__Tribonacci_GetResult_Request__Sequence__are_equal(const tribonacci_interfaces__action__Tribonacci_GetResult_Request__Sequence * lhs, const tribonacci_interfaces__action__Tribonacci_GetResult_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tribonacci_interfaces__action__Tribonacci_GetResult_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tribonacci_interfaces__action__Tribonacci_GetResult_Request__Sequence__copy(
  const tribonacci_interfaces__action__Tribonacci_GetResult_Request__Sequence * input,
  tribonacci_interfaces__action__Tribonacci_GetResult_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tribonacci_interfaces__action__Tribonacci_GetResult_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    tribonacci_interfaces__action__Tribonacci_GetResult_Request * data =
      (tribonacci_interfaces__action__Tribonacci_GetResult_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tribonacci_interfaces__action__Tribonacci_GetResult_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          tribonacci_interfaces__action__Tribonacci_GetResult_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!tribonacci_interfaces__action__Tribonacci_GetResult_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `result`
// already included above
// #include "tribonacci_interfaces/action/detail/tribonacci__functions.h"

bool
tribonacci_interfaces__action__Tribonacci_GetResult_Response__init(tribonacci_interfaces__action__Tribonacci_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!tribonacci_interfaces__action__Tribonacci_Result__init(&msg->result)) {
    tribonacci_interfaces__action__Tribonacci_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
tribonacci_interfaces__action__Tribonacci_GetResult_Response__fini(tribonacci_interfaces__action__Tribonacci_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  tribonacci_interfaces__action__Tribonacci_Result__fini(&msg->result);
}

bool
tribonacci_interfaces__action__Tribonacci_GetResult_Response__are_equal(const tribonacci_interfaces__action__Tribonacci_GetResult_Response * lhs, const tribonacci_interfaces__action__Tribonacci_GetResult_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // result
  if (!tribonacci_interfaces__action__Tribonacci_Result__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  return true;
}

bool
tribonacci_interfaces__action__Tribonacci_GetResult_Response__copy(
  const tribonacci_interfaces__action__Tribonacci_GetResult_Response * input,
  tribonacci_interfaces__action__Tribonacci_GetResult_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  // result
  if (!tribonacci_interfaces__action__Tribonacci_Result__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  return true;
}

tribonacci_interfaces__action__Tribonacci_GetResult_Response *
tribonacci_interfaces__action__Tribonacci_GetResult_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tribonacci_interfaces__action__Tribonacci_GetResult_Response * msg = (tribonacci_interfaces__action__Tribonacci_GetResult_Response *)allocator.allocate(sizeof(tribonacci_interfaces__action__Tribonacci_GetResult_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tribonacci_interfaces__action__Tribonacci_GetResult_Response));
  bool success = tribonacci_interfaces__action__Tribonacci_GetResult_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
tribonacci_interfaces__action__Tribonacci_GetResult_Response__destroy(tribonacci_interfaces__action__Tribonacci_GetResult_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    tribonacci_interfaces__action__Tribonacci_GetResult_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
tribonacci_interfaces__action__Tribonacci_GetResult_Response__Sequence__init(tribonacci_interfaces__action__Tribonacci_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tribonacci_interfaces__action__Tribonacci_GetResult_Response * data = NULL;

  if (size) {
    data = (tribonacci_interfaces__action__Tribonacci_GetResult_Response *)allocator.zero_allocate(size, sizeof(tribonacci_interfaces__action__Tribonacci_GetResult_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tribonacci_interfaces__action__Tribonacci_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tribonacci_interfaces__action__Tribonacci_GetResult_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
tribonacci_interfaces__action__Tribonacci_GetResult_Response__Sequence__fini(tribonacci_interfaces__action__Tribonacci_GetResult_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      tribonacci_interfaces__action__Tribonacci_GetResult_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

tribonacci_interfaces__action__Tribonacci_GetResult_Response__Sequence *
tribonacci_interfaces__action__Tribonacci_GetResult_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tribonacci_interfaces__action__Tribonacci_GetResult_Response__Sequence * array = (tribonacci_interfaces__action__Tribonacci_GetResult_Response__Sequence *)allocator.allocate(sizeof(tribonacci_interfaces__action__Tribonacci_GetResult_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = tribonacci_interfaces__action__Tribonacci_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
tribonacci_interfaces__action__Tribonacci_GetResult_Response__Sequence__destroy(tribonacci_interfaces__action__Tribonacci_GetResult_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    tribonacci_interfaces__action__Tribonacci_GetResult_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
tribonacci_interfaces__action__Tribonacci_GetResult_Response__Sequence__are_equal(const tribonacci_interfaces__action__Tribonacci_GetResult_Response__Sequence * lhs, const tribonacci_interfaces__action__Tribonacci_GetResult_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tribonacci_interfaces__action__Tribonacci_GetResult_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tribonacci_interfaces__action__Tribonacci_GetResult_Response__Sequence__copy(
  const tribonacci_interfaces__action__Tribonacci_GetResult_Response__Sequence * input,
  tribonacci_interfaces__action__Tribonacci_GetResult_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tribonacci_interfaces__action__Tribonacci_GetResult_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    tribonacci_interfaces__action__Tribonacci_GetResult_Response * data =
      (tribonacci_interfaces__action__Tribonacci_GetResult_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tribonacci_interfaces__action__Tribonacci_GetResult_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          tribonacci_interfaces__action__Tribonacci_GetResult_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!tribonacci_interfaces__action__Tribonacci_GetResult_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `feedback`
// already included above
// #include "tribonacci_interfaces/action/detail/tribonacci__functions.h"

bool
tribonacci_interfaces__action__Tribonacci_FeedbackMessage__init(tribonacci_interfaces__action__Tribonacci_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    tribonacci_interfaces__action__Tribonacci_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!tribonacci_interfaces__action__Tribonacci_Feedback__init(&msg->feedback)) {
    tribonacci_interfaces__action__Tribonacci_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
tribonacci_interfaces__action__Tribonacci_FeedbackMessage__fini(tribonacci_interfaces__action__Tribonacci_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  tribonacci_interfaces__action__Tribonacci_Feedback__fini(&msg->feedback);
}

bool
tribonacci_interfaces__action__Tribonacci_FeedbackMessage__are_equal(const tribonacci_interfaces__action__Tribonacci_FeedbackMessage * lhs, const tribonacci_interfaces__action__Tribonacci_FeedbackMessage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // feedback
  if (!tribonacci_interfaces__action__Tribonacci_Feedback__are_equal(
      &(lhs->feedback), &(rhs->feedback)))
  {
    return false;
  }
  return true;
}

bool
tribonacci_interfaces__action__Tribonacci_FeedbackMessage__copy(
  const tribonacci_interfaces__action__Tribonacci_FeedbackMessage * input,
  tribonacci_interfaces__action__Tribonacci_FeedbackMessage * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // feedback
  if (!tribonacci_interfaces__action__Tribonacci_Feedback__copy(
      &(input->feedback), &(output->feedback)))
  {
    return false;
  }
  return true;
}

tribonacci_interfaces__action__Tribonacci_FeedbackMessage *
tribonacci_interfaces__action__Tribonacci_FeedbackMessage__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tribonacci_interfaces__action__Tribonacci_FeedbackMessage * msg = (tribonacci_interfaces__action__Tribonacci_FeedbackMessage *)allocator.allocate(sizeof(tribonacci_interfaces__action__Tribonacci_FeedbackMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tribonacci_interfaces__action__Tribonacci_FeedbackMessage));
  bool success = tribonacci_interfaces__action__Tribonacci_FeedbackMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
tribonacci_interfaces__action__Tribonacci_FeedbackMessage__destroy(tribonacci_interfaces__action__Tribonacci_FeedbackMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    tribonacci_interfaces__action__Tribonacci_FeedbackMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
tribonacci_interfaces__action__Tribonacci_FeedbackMessage__Sequence__init(tribonacci_interfaces__action__Tribonacci_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tribonacci_interfaces__action__Tribonacci_FeedbackMessage * data = NULL;

  if (size) {
    data = (tribonacci_interfaces__action__Tribonacci_FeedbackMessage *)allocator.zero_allocate(size, sizeof(tribonacci_interfaces__action__Tribonacci_FeedbackMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tribonacci_interfaces__action__Tribonacci_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tribonacci_interfaces__action__Tribonacci_FeedbackMessage__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
tribonacci_interfaces__action__Tribonacci_FeedbackMessage__Sequence__fini(tribonacci_interfaces__action__Tribonacci_FeedbackMessage__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      tribonacci_interfaces__action__Tribonacci_FeedbackMessage__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

tribonacci_interfaces__action__Tribonacci_FeedbackMessage__Sequence *
tribonacci_interfaces__action__Tribonacci_FeedbackMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tribonacci_interfaces__action__Tribonacci_FeedbackMessage__Sequence * array = (tribonacci_interfaces__action__Tribonacci_FeedbackMessage__Sequence *)allocator.allocate(sizeof(tribonacci_interfaces__action__Tribonacci_FeedbackMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = tribonacci_interfaces__action__Tribonacci_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
tribonacci_interfaces__action__Tribonacci_FeedbackMessage__Sequence__destroy(tribonacci_interfaces__action__Tribonacci_FeedbackMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    tribonacci_interfaces__action__Tribonacci_FeedbackMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
tribonacci_interfaces__action__Tribonacci_FeedbackMessage__Sequence__are_equal(const tribonacci_interfaces__action__Tribonacci_FeedbackMessage__Sequence * lhs, const tribonacci_interfaces__action__Tribonacci_FeedbackMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tribonacci_interfaces__action__Tribonacci_FeedbackMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tribonacci_interfaces__action__Tribonacci_FeedbackMessage__Sequence__copy(
  const tribonacci_interfaces__action__Tribonacci_FeedbackMessage__Sequence * input,
  tribonacci_interfaces__action__Tribonacci_FeedbackMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tribonacci_interfaces__action__Tribonacci_FeedbackMessage);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    tribonacci_interfaces__action__Tribonacci_FeedbackMessage * data =
      (tribonacci_interfaces__action__Tribonacci_FeedbackMessage *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tribonacci_interfaces__action__Tribonacci_FeedbackMessage__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          tribonacci_interfaces__action__Tribonacci_FeedbackMessage__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!tribonacci_interfaces__action__Tribonacci_FeedbackMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
