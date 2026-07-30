#include <stdio.h>

/**
 * int_index - function that searched for an int
 * @array: array input given
 * @size: size of the array
 * @cmp: a pointer to the function to be used
 *
 * Return: index of the first element or -1 if
 * no element matches or size <= 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	int result;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		result = cmp(array[i]);

		if (result != 0)
			return (i);
	}
	return (-1);
}
