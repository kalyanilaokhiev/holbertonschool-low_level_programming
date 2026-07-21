#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates array of chars
 * @size: size of the array
 * @c: characters in the array
 * Return: NULL if size = 0 or fails, pointer to array
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	i = 0;

	if (size == 0)
	{
		return (NULL);
	}

	array = malloc(sizeof(char) * size);

	if (array == NULL)
	{
		return (NULL);
	}

	while (i < size)
	{
		array[i] = c;
		i++;
	}

	return (array);
}
