#include "interpreter.h"
#include "util/error.h"
#include <stdlib.h>
#include <stdio.h>

// Function Declarations

// Open up file
static void open_file(const char *filename);

// Start up interpreter on given file
void start_interpreter(const char *filename)
{
	open_file(filename);
}

// #####################

// Function Definitions

// Open up file
static void open_file(const char *filename)
{
	FILE *fp = fopen(filename, "r");

	if (!fp)
		error_and_exit("Could not open file %s\n", filename);

	char *line = NULL;
	size_t linecap = 0;
	size_t linelen;

	// Read each line and append to rows
	while ((linelen = getline(&line, &linecap, fp)) != -1) {
		while (linelen > 0 &&
		       (line[linelen - 1] == '\n' || line[linelen - 1] == '\r'))
			linelen--;
		printf("%s", line);
	}

	free(line);
	fclose(fp);
}

// ####################
