#include <stdio.h>

/**
 * main - starting point
 *
 * Description: printing welcome line, menu and
 * quitting with option 0
 * Return: void
 */

int main(void)
{
	int n;

	printf("Simple Calculator\n");
	printf("1) Add\n");
	printf("2) Subtract\n");
	printf("3) Multiply\n");
	printf("4) Divide\n");
	printf("0) Quit\n");

	printf("Choice: ");
	scanf("%d", &n);

	if (n == 0)
	{
		printf("Bye!\n");
	}

	return (0);
}
