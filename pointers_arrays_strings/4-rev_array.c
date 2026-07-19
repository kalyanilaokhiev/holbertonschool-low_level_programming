#include "main.h"

/**
 * reverse_array - reversed content of an array of int
 * @a: array of int
 * @n: number of elements in array
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int left;
	int right;
	int temp;

	left = 0;
	right = n - 1;

	while (left < right)
	{
		temp = a[left];
		a[left] = a[right];
		a[right] = temp;

		left++;
		right--;
	}
}
