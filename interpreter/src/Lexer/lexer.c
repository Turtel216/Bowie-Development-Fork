#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>

#include "../util/error.h"
#include "lexer.h"

#define MAX_LENGTH 100

// Check if input string is a keyword
static bool is_keyword(char *str)
{
	// List of preserved words
	const char *keywords[] = { "Ziggy\n", "Major Tom\n", "Space Oddity\n",
				   "Starman\n", "Life on Mars\n?" };

	for (int i = 0; i < sizeof(keywords) / sizeof(keywords[0]); ++i) {
		if (strcmp(str, keywords[i]) == 0)
			return true;
	}

	return false;
}

// check for an integer value
static bool is_integer(char *str)
{
	if (str == NULL || *str == '\0') {
		return false;
	}

	int i = 0;
	while (isdigit(str[i]))
		++i;

	return str[i] == '\0';
}

// trims a substring from given 'start' to 'end'
static char *get_substring(char *str, int start, int end) // TODO
{
	int len = strlen(str);
	int sub_length = end - start + 1;

	char *subStr = (char *)malloc((sub_length + 1) * sizeof(char));
	strncpy(subStr, str + start, sub_length);
	subStr[sub_length] = '\0';
	return subStr;
}

// parse the input
void lexer_lex(char *input)
{
	int len = strlen(input);

	//char *sub_str = get_substring(input, 0, len - 1); TODO
	char *sub_str = input;

	if (is_keyword(sub_str)) {
		printf("Token: Keyword, Value: %s\n", sub_str);
		return;
	} else if (is_integer(sub_str)) {
		printf("Token: Integer, Value: %s\n", sub_str);
		return;
	}

	error_and_exit("Lexer error!\n");
}
