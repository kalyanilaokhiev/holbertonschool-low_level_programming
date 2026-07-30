#include <stdio.h>

/**
 * array_iterator - function that exectues a fucntion given as a parameter
 * @array: input array given
 * @size: size of the array
 * @action: action to be done in the function
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i <= size; i++)
		action(array[i]);
}
