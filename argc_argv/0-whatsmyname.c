#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints name of program
 *
 * @argc: number of strings in array
 * @argv: array of strings in argc
 *
 * Return: name
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
