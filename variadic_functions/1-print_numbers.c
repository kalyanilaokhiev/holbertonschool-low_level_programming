#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - printing numbers
 *
 * @separator: comma
 * @n: amount of numbers to print
 *
 * Return: nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		int x = va_arg(args, int);

		printf("%d", x);

		if (separator != NULL && i < (n - 1))
		{
			printf("%s", separator);
		}
	}

	va_end(args);

	printf("\n");
}
