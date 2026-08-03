#include "main.h"

/**
 * _puts - prints string
 * @str: pointer to the string
 */

void _puts(char *str)
{
	int i;

	i = 0;

	/* output each character 1 by one going through entire string */
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}

	/* when reach end, print new line */
	while (str[i] == '\0')
	{
		_putchar('\n');
	}
	_putchar('\n');

}
