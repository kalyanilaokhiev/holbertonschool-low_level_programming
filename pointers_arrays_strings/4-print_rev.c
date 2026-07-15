#include "main.h"

/**
 * print_rev - prints string in reverse
 * @s: string to be printed
 *
 * Return: void
 */

void print_rev(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		len++;
	}

	len--;

	while (len >= 0)
	{
		_putchar(s[len]);
		len--;
	}
	_putchar('\n');
}
