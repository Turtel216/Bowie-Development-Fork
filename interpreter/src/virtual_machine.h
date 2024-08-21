#ifndef virtual_machine_h
#define virtual_machine_h

#include <stdint.h>
#include "value.h"

// Initiale Stack size
#define STACK_SIZE 256

typedef struct {
	int stack_size; // Current size of stack
	uint8_t id; // Id of vm
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
void pop();

#endif // !virtual_machine_h
