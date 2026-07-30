#include <stdio.h>

/**
 * print_name - prints a name
 * @name: name inputted
 * @f: the functions print_name_uppercase or print_name_as_is
 *
 * return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL && f == NULL)
		return;

	f(name);
}
