#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_char - helper function used to print characters
 * @args: used to iterate and get argument inputs
 */
void print_char(va_list args)
{
	int c = va_arg(args, int);

	printf("%c", c);
}

/**
 * print_int - helper function used to print integers
 * @args: used to iterate and get argument inputs
 */
void print_int(va_list args)
{
	int i = va_arg(args, int);

	printf("%i", i);
}

/**
 * print_float - helper function used to print floats
 * @args: used to iterate and get argument inputs
 */
void print_float(va_list args)
{
	double f = va_arg(args, double);

	printf("%f", f);
}

/**
 * print_str - helper function used to print strings
 * @args: used to iterate and get argument inputs
 */
void print_str(va_list args)
{
	char *s = va_arg(args, char *);

	if (s == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", s);
}

/**
 * print_all - calls correct function by matching array
 * @format: pointer to a string thaat containes the list of
 * types of following arguments
 */
void print_all(const char * const format, ...)
{
	int i;
	int j;
	char *comma = ""; /* str bc , + space */
	va_list args;

	func pointers[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_str},
		{0, NULL}
	};

	va_start(args, format);
	i = 0;

	/* while format is valid and is not the last null byte */
	while (format != NULL && format[i] != '\0')
	{
		j = 0;

		while (pointers[j].letter)
		{
			/* goes through format string and matches pointer array letters */
			if (format[i] == pointers[j].letter)
			{
				/* originally print "" */
				printf("%s", comma);
				/* call and run correct helper */
				pointers[j].f(args);
				/* re initialise comma as ", " */
				comma = ", ";
				break;
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
