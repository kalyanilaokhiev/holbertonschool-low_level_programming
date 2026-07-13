#include <stdio.h>
#include "main.h"

/**
 * main - starting point
 *
 * Description: prints 1 - 100 with buzz words
 * Return: 0
 */

void main(void)
{
	int n;

	for (n = 0; n <= 100; n++)
	{
		if (n % 3 == 0 && n % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (n % 3 == 0)
		{
			printf("Fizz");
		}
		else if (n % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", n);
		}
	}
	printf("\n");
	return (0);
}
