#include <stdio.h>

/**
 * main - starting point
 *
 * Description: prints alphabet in lowercase
 * then uppercase
 * Return: zero
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}

	for (letter = 'A'; letter <= 'Z'; letter++)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
