#include "main.h"

/**
 * puts2 - prints every other character
 * @str: string
 *
 * Return: void
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);

		/* so doesnt go past the word */
		if (str[i + 1] == '\0')
		{
			break;
		}

		/* go every second letter */
		i += 2;
	}
	_putchar('\n');
}
