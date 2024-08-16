#include <assert.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>

#include "../util/error.h"
#include "lexer.h"
#include "../interpreter.h"

// Head of linekd list
keyword_map *head = NULL;

static void add_token(keyword_map node)
{
	keyword_map *new_node = (keyword_map *)malloc(sizeof(keyword_map));
	assert(new_node != NULL && "Error allocating memory in add_token");
	new_node->next = head;
	new_node->value = node.value;
	new_node->key = node.key;

	head = new_node;
}

// Check if input string is a keyword
static bool is_keyword(char *str)
{
	// List of preserved words
	static const keyword_map keywords[] = {
		{ "Ziggy", ZIGGY },   { "Major", MAJOR },
		{ "Tom", TOM },	      { "Space", SPACE },
		{ "Oddity", ODDITY }, { "Starman", STARMAN },
		{ "Life", LIFE },     { "on", ON },
		{ "Mars?", MARS }
	};

	for (int i = 0; i < sizeof(keywords) / sizeof(keywords[0]); ++i) {
		if (strcmp(str, keywords[i].value) == 0)
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

	if (str[i] == '\0') {
		keyword_map node = { str, NUMBER };
		add_token(node);
		return true;
	}

	return false;
}

// trims a substring and removes spaces
static char *get_substring(char *str)
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
void lexer_lex(char *input)
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
