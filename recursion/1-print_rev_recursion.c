#include "main.h"

/**
 * _print_rev_recursion - print string in reverse
 * @s: pointer to the string
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;

	/* call func first to store, print out most recent char */
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
