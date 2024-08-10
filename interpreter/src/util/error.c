#include "error.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

// print formated string error and exit
void error_and_exit(const char *fmt, ...)
{
	char msg_buff[80];

	va_list ap;
	va_start(ap, fmt);
	vsnprintf(msg_buff, sizeof(msg_buff), fmt, ap);
	va_end(ap);

	printf("%s", msg_buff);

	exit(EXIT_FAILURE);
}
