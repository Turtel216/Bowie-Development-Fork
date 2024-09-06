#include <stdlib.h>

#include "memory.h"
#include "error.h"
#include "virtual_machine.h"

// Realocate given type
void *reallocate(void *pointer, size_t oldSize, size_t newSize)
{
	if (newSize == 0) {
		free(pointer);
		return NULL;
	}

	void *result = realloc(pointer, newSize);
	if (result == NULL)
		error_and_exit("Failed to reallocate memory in %s", __FILE__);

	return result;
}
