#include "main.h"

/**
 * string_toupper - changes lower to upper
 * @str: string to change
 *
 * Return: pointer to new string
 */

char *string_toupper(char *str)
{
	int i;

	i = 0;

	while (str[i] != '\0')
	{

		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
