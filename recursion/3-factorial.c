#include "main.h"

/**
 * factorial - function that returns factorial of given number
 * @n: integer recieved
 *
 * Return: -1 if neg, 1 if n = 0, else the factorial output
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
