#ifndef virtual_machine_h
#define virtual_machine_h

#include <stdint.h>
#include "value.h"
#include "chunk.h"

// Initiale Stack size
#define STACK_SIZE 256

typedef struct {
	Chunk *chunk; // Byte code chunk
	uint8_t *ip; // Unique vm id
	Value stack[STACK_SIZE]; // Stack dynamic array pointer
	Value *stackTop; // Stack's head pointer
} VM;

// Start up virtual machine
void int_vm(void);
// Close virtual machine and free up memory
void free_vm(void);
// Interprete given string
InterpreterResult interprete(const char *source);
// Push onto VM stack
void push();
// Pop from VM stack
Value pop();

#endif // !virtual_machine_h
