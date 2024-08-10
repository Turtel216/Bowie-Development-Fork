#include "interpreter.h"
#include <stdlib.h>
#include "util/error.h"

int main(int argc, char *argv[])
{
	// Check if a file path is given
	if (argc == 2)
		start_interpreter(
			argv[1]); // start up interpreter on given file
	else
		error_and_exit(
			"Wrong number of arguments.\n1 is required and you provid %d\n",
			--argc);

	return EXIT_SUCCESS;
}
