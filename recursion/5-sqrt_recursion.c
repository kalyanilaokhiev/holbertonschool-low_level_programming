#include "main.h"

/**
 * sqrt_find - using recurion find natural square root of number
 * @n: target number
 * @i: current index
 *
 * Return: natural square root, or -1 id no natural root
 */

int sqrt_find(int n, int i)
{
	/* natural square root found */
	if (i * i == n)
		return (i);

	/* over target aka no natural root exist */
	if (i * i > n)
		return (-1);

	/* recursion to test next number */
	return (sqrt_find(n, i + 1));
}

/**
 * _sqrt_recursion - returns natural square root of number
 * @n: target number
 *
 * Return: resulting square root, or -1
 */
int _sqrt_recursion(int n)
{
	/* neg number aka no natural root exist */
	if (n < 0)
		return (-1);

	return (sqrt_find(n, 0));
}
