#include <stdlib.h>

#include "chunk.h"
#include "memory.h"
#include <stdint.h>
#include "value.h"
#include "virtual_machine.h"

// Initialize chunk
void init_chunk(Chunk *chunk)
{
	chunk->count = 0;
	chunk->capacity = 0;
	chunk->code = NULL;
	chunk->lines = NULL;
	init_value_array(&chunk->constants);
}

// Free chunk
void free_chunk(Chunk *chunk)
{
	FREE_ARRAY(uint8_t, chunk->code, chunk->capacity);
	FREE_ARRAY(int, chunk->lines, chunk->capacity);
	free_value_array(&chunk->constants);
	init_chunk(chunk);
}

// Write to new chunk
void write_chunk(Chunk *chunk, uint8_t byte, int line)
{
	if (chunk->capacity < chunk->count + 1) {
		int oldCapacity = chunk->capacity;
		chunk->capacity = GROW_CAPACITY(oldCapacity);
		chunk->code = GROW_ARRAY(uint8_t, chunk->code, oldCapacity,
					 chunk->capacity);
		chunk->lines = GROW_ARRAY(int, chunk->lines, oldCapacity,
					  chunk->capacity);
	}

	chunk->code[chunk->count] = byte;
	chunk->lines[chunk->count] = line;
	chunk->count++;
}

int add_constant(Chunk *chunk, Value value)
{
	push(value);
	write_value_array(&chunk->constants, value);
	pop();
	return chunk->constants.count - 1;
}