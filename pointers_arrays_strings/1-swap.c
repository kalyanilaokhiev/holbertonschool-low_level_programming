#include "main.h"

/**
 * swap_int - swaps values of a and b
 * @a: first int
 * @b: second int
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
