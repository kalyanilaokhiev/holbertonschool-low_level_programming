#include "main.h"
#include <stdlib.h>

/**
 * _strdup - copying string into new memory block
 * @str: original string
 *
 * Return: NULL if str = NULL, pointer to the duplicated string
 */

char *_strdup(char *str)
{
	char *copy;
	unsigned int i;
	unsigned int length;

	length = 0;

	if (str == 0)
	{
		return (NULL);
	}

	for (length = 0; str[length] != '\0'; length++)
	{
	}

	copy = malloc(sizeof(char) * (length + 1));

	if (copy == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < (length + 1); i++)
	{
		copy[i] = str[i];
	}

	return (copy);
}
