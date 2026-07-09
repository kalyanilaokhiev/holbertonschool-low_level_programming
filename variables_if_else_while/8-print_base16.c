#include <stdio.h>

/**
 * main - starting point
 *
 * Description: prints all numbers of base 16
 * Return: zero
 */

int main(void)
{
	int number;

	for (number = '0'; number <= '9'; number++)
	{
		putchar(number);
	}

	for (number = 'a'; number <= 'f'; number++)
	{
		putchar(number);
	}

	putchar('\n');
	return (0);
}

