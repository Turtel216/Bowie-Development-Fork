#ifndef bowie_value_h
#define bowie_value_h

#include <stdbool.h>

// Marcos for converting C values into bowie values
#define BOOL_VAL(value) ((Value){ VAL_BOOL, { .boolean = value } })
#define NIL_VAL ((Value){ VAL_NIL, { .number = 0 } })
#define NUMBER_VAL(value) ((Value){ VAL_NUMBER, { .number = value } })
//##################################################

// Marcos for converting bowie values into C values
#define AS_BOOL(value) ((value).as.boolean)
#define AS_NUMBER(value) ((value).as.number)
#define AS_OBJ(value) ((value).as.obj)
//##################################################

// Marcos for checking a values type
#define IS_BOOL(value) ((value).type == VAL_BOOL)
#define IS_NIL(value) ((value).type == VAL_NIL)
#define IS_NUMBER(value) ((value).type == VAL_NUMBER)
//##################################

typedef enum {
	VAL_BOOL,
	VAL_NIL,
	VAL_NUMBER,
} ValueType;

typedef struct {
	ValueType type;
	union {
		bool boolean;
		double number;
	} as;
} Value;

typedef struct {
	int capacity;
	int count;
	Value *values;
} ValueArray;

typedef enum {
	INTERPRET_OK,
	INTERPRET_COMPILE_ERROR,
	INTERPRET_RUNTIME_ERROR,
} InterpreterResult;

// Initialize array of value structs
void init_value_array(ValueArray *array);
// Add value to value array
void write_value_array(ValueArray *array, Value value);
// Free array of value structs
void free_value_array(ValueArray *array);
// Print value to iostream
void print_value(Value value);
// Checks if two values are equal
bool values_equal(Value a, Value b);

#endif // !bowie_value_h
