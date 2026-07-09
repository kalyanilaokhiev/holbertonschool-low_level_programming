#include <stdio.h>

/**
 * main - starting point
 *
 * Description: prints alphabet backwards
 * Return: zero
 */

int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
	{
		putchar(letter);
	}
	putchar('\n');
	return(0);
}
