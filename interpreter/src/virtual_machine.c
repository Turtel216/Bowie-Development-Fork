#include "chunk.h"
#include "virtual_machine.h"
#include "memory.h"
#include "value.h"

#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdarg.h>

// Global Variables
VM vm;

// Function declarations
// Get stack value of specific distance
static Value peek(int distance);
// Throw runtime error and reset stack
static void runtime_error(const char *format, ...);
// Check bool value of Value type
static bool is_falsey(Value value);
// Concatenate first 2 strings on the stack
static void concatenate(void);
//######################

// Function definition

// Reset stack to initiale state
static void reset_stack(void)
{
	vm.stackTop = vm.stack;
}

// Start up virtual machine
void init_vm(void)
{
	// Set stack head pointer and stack size
	reset_stack();
}

// Close virtual machine and free up memory
void free_vm(void)
{
}

// Run compiled instructions on VM
static InterpreterResult run(void)
{
	// marcos for vm instruction execution
#define READ_STRING() AS_STRING(READ_CONSTANT())

#define READ_BYTE() (*vm->ip++)

#define READ_SHORT() \
	(frame->ip += 2, (uint16_t)((frame->ip[-2] << 8) | frame->ip[-1]))

#define READ_CONSTANT() (vm.chunk->constants.values[READ_BYTE()])
#define BINARY_OP(valueType, op)                                   \
	do {                                                       \
		if (!IS_NUMBER(peek(0)) || !IS_NUMBER(peek(1))) {  \
			runtimeError("Operands must be numbers."); \
			return INTERPRET_RUNTIME_ERROR;            \
		}                                                  \
		double b = AS_NUMBER(pop());                       \
		double a = AS_NUMBER(pop());                       \
		push(valueType(a op b));                           \
	} while (false)

	//#########################################
	for (;;) {
		uint8_t instruction;
		switch (instruction = READ_BYTE()) {
		case OP_CONSTANT: {
			Value constant = READ_CONSTANT();
			push(constant);
			break;
		}
		case OP_NIL:
			push(NIL_VAL);
			break;
		case OP_TRUE:
			push(BOOL_VAL(true));
			break;
		case OP_FALSE:
			push(BOOL_VAL(false));
			break;
		case OP_EQUAL: {
			Value b = pop();
			Value a = pop();
			push(BOOL_VAL(values_equal(a, b)));
			break;
		}
		case OP_ADD: {
			if (IS_STRING(peek(0)) && IS_STRING(peek(1))) {
				concatenate();
			} else if (IS_NUMBER(peek(0)) && IS_NUMBER(peek(1))) {
				double b = AS_NUMBER(pop());
				double a = AS_NUMBER(pop());
				push(NUMBER_VAL(a + b));
			} else {
				runtime_error(
					"Operands must be two numbers or two strings.");
				return INTERPRET_RUNTIME_ERROR;
			}
			break;
		}
		case OP_GREATER:
			BINARY_OP(BOOL_VAL, >);
			break;
		case OP_LESS:
			BINARY_OP(BOOL_VAL, <);
			break;
		case OP_SUBTRACT:
			BINARY_OP(NUMBER_VAL, -);
			break;
		case OP_MULTIPLY:
			BINARY_OP(NUMBER_VAL, *);
			break;
		case OP_DIVIDE:
			BINARY_OP(NUMBER_VAL, /);
			break;
		case OP_NOT:
			push(BOOL_VAL(is_falsey(pop())));
			break;
		case OP_NEGATE:
			if (!IS_NUMBER(peek(0))) {
				runtime_error("Operand must be a number.");
				return INTERPRET_RUNTIME_ERROR;
			}
			push(NUMBER_VAL(-AS_NUMBER(pop())));
			break;
		case OP_PRINT: {
			print_value(pop());
			printf("\n");
			break;
		}
		case OP_POP:
			pop();
			break;
		case OP_RETURN: {
			return INTERPRET_OK;
		}
		}
	}

#undef READ_BYTE
#undef READ_CONSTANT
#undef READ_STRING
#undef BINARY_OP
#undef READ_SHORT
}

// Get stack value of specific distance
static Value peek(int distance)
{
	return vm.stackTop[-1 - distance];
}

// Throw runtime error and reset stack
static void runtime_error(const char *format, ...)
{
	va_list args;
	va_start(args, format);
	vfprintf(stderr, format, args);
	va_end(args);
	fputs("\n", stderr);
	// TODO
	reset_stack();
}

static void define_native(const char *name, NativeFn function)
{
	push(OBJ_VAL(copy_string(name, (int)strlen(name))));
	push(OBJ_VAL(new_native(function)));
	insert_into_table(&vm.globals, AS_STRING(vm.stack[0]), vm.stack[1]);
	pop();
	pop();
}

// Interpret given string
InterpretResult interpret(const char *source)
{
	return run();
}

// Check bool value of Value type
static bool is_falsey(Value value)
{
	return IS_NIL(value) || (IS_BOOL(value) && !AS_BOOL(value));
}

// Concatenate first 2 strings on the stack
static void concatenate(void) //TODO
{
	ObjString *b = AS_STRING(pop());
	ObjString *a = AS_STRING(pop());

	int length = a->length + b->length;
	char *chars = ALLOCATE(char, length + 1);
	memcpy(chars, a->chars, a->length);
	memcpy(chars + a->length, b->chars, b->length);
	chars[length] = '\0';

	ObjString *result = take_string(chars, length);

	pop();
	pop();

	push(OBJ_VAL(result));
}

static Value clock_native(int argCount, Value *args)
{
	return NUMBER_VAL((double)clock() / CLOCKS_PER_SEC);
}

// Push onto VM stack
void push(Value value)
{
	*vm.stackTop = value;
	vm.stackTop++;
}

// Pop from VM stack
Value pop(void)
{
	--vm.stackTop;
	return *vm.stackTop;
}
//####################