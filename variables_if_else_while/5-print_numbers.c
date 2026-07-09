#include <stdio.h>

/**
 * main - starting point
 *
 * Description: prints all single digit 0-10
 * Return: zero
 */

int main(void)
{
	int number;

	for (number = 0; number < 10; number++)
	{
		putchar(number + '0');
	}
	putchar('\n');
	return (0);
}
