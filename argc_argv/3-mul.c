#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies
 *
 * @argc: number of strings in array
 * @argv: array of strings in argc
 *
 * Return: multiplies strings
 */

int main(int argc, char *argv[])
{
	int i;
	int mul = 0;

	if (argc == 3)
	{
		/* 1 because you dont want the name of the program*/
		for (i = 1; i < argc; i++)
		{
			int num1 = atoi(argv[1]);
			int num2 = atoi(argv[2]);

			mul = (num1 * num2);
		}
		printf("%d\n", mul);
	}
	else
		printf("Error\n");

	return (0);
}
