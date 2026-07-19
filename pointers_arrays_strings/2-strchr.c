#include "main.h"

/**
 * _strchr - locates all char
 * @s: string being looked at
 * @c: character in the string
 *
 * Return: pointer to c
 */

char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (s + i);
		}
		i++;
	}

	if (s[i] == c)
	{
		return (s + i);
	}

	return (NULL);
}
