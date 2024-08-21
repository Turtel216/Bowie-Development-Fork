#ifndef bowie_value_h
#define bowie_value_h

typedef struct {
	int num;
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

#endif // !bowie_value_h
