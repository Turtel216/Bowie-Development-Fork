#include "interpreter.h"
#include "error.h"
#include "lexer.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

// Start up interpreter on given file
void start_interpreter(const char *filename)
{
	FILE *fp = fopen(filename, "r");

	if (!fp)
		error_and_exit("Could not open file %s\n", filename);

	char *line = NULL;
	size_t linecap = 0;
	size_t linelen;

	// Read each line and run lexer
	while ((linelen = getline(&line, &linecap, fp)) != -1) {
		while (linelen > 0 &&
		       (line[linelen - 1] == '\n' || line[linelen - 1] == '\r'))
			linelen--;

		// Split when a space is accuring
		line = strtok(line, " ");
		while (line != NULL) {
			lexer_lex(line); // Lex token
			line = strtok(NULL, " "); // reset line for next token
		}
	}

	free(line);
	fclose(fp);
}
