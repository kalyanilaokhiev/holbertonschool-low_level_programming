#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - printing strings followed by new line
 *
 * @separator: comma
 * @n: number of string
 *
 * Return: nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		char *str = va_arg(args, char *);

		printf("%s", str);

		if (str == NULL)
			printf("nil");

		if (separator != NULL && i < (n - 1))
		{
			printf("%s", separator);
		}
	}
	va_end(args);

	printf("\n");
}
