#include <stdio.h>
#include <string.h>

#include "memory.h"
#include "value.h"

// Initialize array of value structs
void init_value_array(ValueArray *array)
{
	array->values = NULL;
	array->capacity = 0;
	array->count = 0;
}

// Add value to value array
void write_value_array(ValueArray *array, Value value)
{
	if (array->capacity < array->count + 1) {
		int oldCapacity = array->capacity;
		array->capacity = GROW_CAPACITY(oldCapacity);
		array->values = GROW_ARRAY(Value, array->values, oldCapacity,
					   array->capacity);
	}

	array->values[array->count] = value;
	array->count++;
}

// Free array of value structs
void free_value_array(ValueArray *array)
{
	FREE_ARRAY(Value, array->values, array->capacity);
	init_value_array(array);
}

// Print value to iostream
void print_value(Value value)
{
	switch (value.type) {
	case VAL_BOOL:
		printf(AS_BOOL(value) ? "true" : "false");
		break;
	case VAL_NIL:
		printf("nil");
		break;
	case VAL_NUMBER:
		printf("%g", AS_NUMBER(value));
		break;
		break;
	}
}

// Checks if two values are equal
bool values_equal(Value a, Value b)
{
	// Check if values are of equal type
	if (a.type != b.type)
		return false;

	// Check all types
	switch (a.type) {
	case VAL_BOOL:
		return AS_BOOL(a) == AS_BOOL(b);
	case VAL_NIL:
		return true;
	case VAL_NUMBER:
		return AS_NUMBER(a) == AS_NUMBER(b);
	default:
		return false; // Unreachable.
	}
}
