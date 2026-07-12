#include "main.h"

/**
 * print_to_98 - starting point
 * @n: starting number
 *
 * Description: counts up or down to 98
 * Return: void
 */

void print_to_98(int n)
{
	while (n != 98)
	{
		int number = n;

		if (number < 0)
		{
			_putchar('-');
			number = -number;
		}

		if (number >= 100)
		{
			_putchar((number / 100) + '0');
			_putchar(((number / 10) % 10) + '0');
		}
		else if (number >= 10)
		{
			_putchar((number / 10) + '0');
		}
		_putchar((number % 10) + '0');

		_putchar(',');
		_putchar(' ');

		if (n < 98)
		{
			n++;
		}
		else
		{
			n--;
		}
	}
	_putchar('9');
	_putchar('8');
	_putchar('\n');
}
