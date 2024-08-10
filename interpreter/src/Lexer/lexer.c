#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>

#include "../util/error.h"
#include "lexer.h"

// Check if input string is a keyword
static bool is_keyword(char *str)
{
	// List of preserved words
	static const char *keywords[] = {
		"Ziggy", "Major-Tom", "Space-Oddity", "Starman", "Life-on-Mars?"
	}; //TODO remove the '-'

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

// trims a substring and removes spaces
static char *get_substring(char *str) // TODO Tokens separated by spaces
{
	int len = strlen(str);

	// Check if a new line character is added
	if (str[len - 1] != '\n')
		return str;

	// Remove new line if new line is present
	char *sub_str = (char *)malloc((len - 1) * sizeof(char));
	if (sub_str == NULL)
		error_and_exit("Memory allocation error at line %\n", __LINE__);

	strncpy(sub_str, str, len - 1);
	return sub_str;
}

// parse the input
void lexer_lex(char *input) // TODO add support for
{
	int len = strlen(input);

	// Trim input string
	char *sub_str = get_substring(input);

	if (is_keyword(sub_str)) {
		printf("Token: Keyword, Value: %s\n", sub_str);
		return;
	} else if (is_integer(sub_str)) {
		printf("Token: Integer, Value: %s\n", sub_str);
		return;
	}

	error_and_exit("Lexer error!\n");
}
