#include "main.h"

/**
 * print_line - starting point
 * @n: number of _
 *
 * Description: draws a straight line in terminal
 * Return: void
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
