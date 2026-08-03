#include "main.h"

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
