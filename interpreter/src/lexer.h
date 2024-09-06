#ifndef bowie_lexer_h
#define bowie_lexer_h

// Types of language tokens
typedef enum {
	// Single-character tokens.
	TOKEN_MINUS,
	TOKEN_PLUS,
	TOKEN_SEMICOLON,
	TOKEN_SLASH,
	TOKEN_STAR,
	// One or two character tokens.
	TOKEN_BANG,
	TOKEN_BANG_EQUAL,
	TOKEN_EQUAL,
	TOKEN_EQUAL_EQUAL,
	TOKEN_GREATER,
	TOKEN_GREATER_EQUAL,
	TOKEN_LESS,
	TOKEN_LESS_EQUAL,
	// Literals.
	TOKEN_IDENTIFIER,
	TOKEN_STRING,
	TOKEN_NUMBER,
	// Keywords.
	TOKEN_AND,
	TOKEN_IF,
	TOKEN_NIL,
	TOKEN_OR,
	TOKEN_PRINT,
	TOKEN_RETURN,
	TOKEN_TRUE,
	TOKEN_VAR,
	TOKEN_WHILE,
	TOKEN_DECREMENT,
	TOKEN_INCREMENT,

	TOKEN_ERROR,
	TOKEN_EOF
} TokenType;

// Token's meta data
typedef struct {
	TokenType type; // The type of language token
	const char *start; // String lexeme
	int length; // The lenght of the string
	int line; // Line number of token in source file
} Token;

// Start up scanner
void init_scanner(const char *source);
// Run scanner
Token scan_token(void);

#endif // !bowie_lexer_h
