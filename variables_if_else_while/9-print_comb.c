#include <stdio.h>

/**
 * main - starting point
 *
 * Description: prints 1-9 with space
 * Return: zero
 */

int main(void)
{
	int number;

	for (number = 0; number < 10; number++)
	{
		putchar(number + '0');

		if (number < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
