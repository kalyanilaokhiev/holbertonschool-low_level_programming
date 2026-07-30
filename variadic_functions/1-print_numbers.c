#include <stdio.h>
#include <stdarg.h>

/**
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	
	va_list args;

	va_start(args, n);

	if (separator == NULL)
		return;

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
