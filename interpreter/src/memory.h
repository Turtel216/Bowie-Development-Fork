#ifndef bowie_memory_h
#define bowie_memory_h

#include "value.h"
#include <stdlib.h>

// Macro for expending an arrays capacity
#define GROW_CAPACITY(capacity) ((capacity) < 8 ? 8 : (capacity) * 2)

// Macro for expending an arrays size
#define GROW_ARRAY(type, pointer, oldCount, newCount)          \
	(type *)reallocate(pointer, sizeof(type) * (oldCount), \
			   sizeof(type) * (newCount))

// Macro for freeing an array
#define FREE_ARRAY(type, pointer, oldCount) \
	reallocate(pointer, sizeof(type) * (oldCount), 0)

// Resize allocated memory to 0
#define FREE(type, pointer) reallocate(pointer, sizeof(type), 0)

#define ALLOCATE(type, count) \
	(type *)reallocate(NULL, 0, sizeof(type) * (count))

// Realocate given type
void *reallocate(void *pointer, size_t oldSize, size_t newSize);
// Free memory for object list
void free_objects(void);

#endif
