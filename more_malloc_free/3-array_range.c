#include "main.h"
#include <stdlib.h>

/**
 * array_range - function creates an array of int
 * @min: min number value
 * @max: max number value
 *
 * Return: pointer
 */

int *array_range(int min, int max)
{
	int *ptr;
	int i;
	int size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	ptr = malloc(sizeof(int) * size);

	if (ptr == NULL)
		return (NULL);

	i = 0;

	while (min <= max)
	{
		ptr[i] = min;
		i++;
		min++;
	}
	return (ptr);
}
