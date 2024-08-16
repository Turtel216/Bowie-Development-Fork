#pragma once

// Keyword enums
enum KEY { NUMBER, INITIALIZE, INCREMENT, DECREMENT, PRINT, INPUT };

// Map holding token enum pairs
typedef struct Map {
	int key;
	char *value;
	struct Map *next;
} keyword_map;

void start_interpreter(const char *filename);
