#ifndef bowie_chunk_h
#define bowie_chunk_h

#include <stdint.h>
#include "value.h"

// Types of vm instructions
typedef enum {
	OP_CONSTANT,
	OP_NIL,
	OP_TRUE,
	OP_POP,
	OP_FALSE,
	OP_EQUAL,
	OP_GREATER,
	OP_LESS,
	OP_JUMP_IF_FALSE,
	OP_JUMP,
	OP_LOOP,
	OP_ADD,
	OP_SUBTRACT,
	OP_MULTIPLY,
	OP_DIVIDE,
	OP_NOT,
	OP_NEGATE,
	OP_PRINT,
	OP_RETURN,
} OpCode;

// Chunk holding byte code
typedef struct {
	int count;
	int capacity;
	uint8_t *code;
	int *lines;
	ValueArray constants;
} Chunk;

#endif // !bowie_chunk_h
