#include "main.h"

/**
 * _puts_recursion - prints out string using recursion
 * @s: pointer to the string
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	/* print current letter */
	_putchar(*s);
	/* call next letter in memory */
	_puts_recursion(s + 1);
}
