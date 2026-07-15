#include "main.h"

/**
 * puts_half(char *str);
 * @str: string
 *
 * Return: void
 */

void puts_half(char *str)
{
	int split;
	int length = 0;

	while (str[length] != '/0')
	{
		length++;
	}

	if (length % 2 == 0)
	{
		split = length / 2;
	}
	else
	{
		/* if length is odd add 1 to make even */
		split = (length + 1) / 2;
	}

	/* print string */
	while (str[split] != '\0')
	{
		_putchar(str[split]);
		split++;
	}
	_putchar('\n');
}
