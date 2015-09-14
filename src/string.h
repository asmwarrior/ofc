#ifndef __string_h__
#define __string_h__

#include <stdbool.h>

typedef struct
{
	char*    base;
	unsigned size;
} string_t;

string_t string_create(char* base, unsigned size);
void     string_delete(string_t string);

bool string_empty(const string_t string);

/* May return truncated string if string contains nul characters. */
const char* string_strz(const string_t string);

unsigned string_length(const string_t string);
bool     string_equal(const string_t a, const string_t b);

#endif
