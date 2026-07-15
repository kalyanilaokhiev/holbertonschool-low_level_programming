#include "main.h"

/**
 * print_array - prints n elements of array of int
 * @a: pointer to first element
 * @n: number of elements
 *
 * Return: void
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		/* adding commas to all but the last */
		if (i < n - 1)
		{
			printf(",");
		}
	}
	printf("\n");
}
