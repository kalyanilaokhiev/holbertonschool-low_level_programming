#include "main.h"

/**
 * prime_num = using recursion to check if number is divisible by i
 * @n: input number
 * @i: what input is being divided by
 *
 * Return: 1 if n is prime, 0 otherwise
 */

int prime_num(int n, int i)
{
	/* checked up to sqrt n with no divisors aka prime */
	if (i * i > n)
		return (1);
	
	/* found num that divides n evernly aka not prime */
	if (n % i == 0)
		return (0);

	/* recursion to test next i divisor */
	return(prime_num(n, i + 1));
}

/**
 * is_prime_number - checks if integer is prime num
 * @n: input num
 *
 * Return: 1 if prime, 0 otherwise
 */
int is_prime_number(int n)
{
	/* 0, 1 and neg are not prime */
	if (n <= 1)
		return (0);

	/* begin looking at divisors from first prime num aka 2 */
	return(prime_num(n, 2));
}
