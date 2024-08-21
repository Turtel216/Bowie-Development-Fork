#ifndef bowie_interpreter_h
#define bowie_interpreter_h

// Keyword enums
enum KEY { NUMBER, ZIGGY, MAJOR, TOM, SPACE, ODDITY, STARMAN, LIFE, ON, MARS };

// Map holding token enum pairs
typedef struct Map {
	char *value;
	int key;
	struct Map *next;
} keyword_map;

void start_interpreter(const char *filename);

#endif // !bowie_interpreter_h
