#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);

/**
 * struct function - structure that has the letter of func + func itself
 * @letter: symbol of function (eg. c, i, f, s)
 * @f: the function pointer to print correct function
 */

typedef struct function
{
	char letter;
	void (*f)(va_list args);
} func;

void print_all(const char * const format, ...);

#endif
