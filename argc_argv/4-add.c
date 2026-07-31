#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds numbers
 *
 * @argc: number of strings in array
 * @argv: array of strings in argc
 *
 * Return: numbers that have been added
 */

int main(int argc, char *argv[])
{
	int i;
	int j;
	int sum = 0;
	int num = 0;

	/* because there will still be the name */
	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	/* loop through array */
	for (i = 1; i < argc; i++)
	{
		/* look at each string (eg. 10'\0') */
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			/* looking through ascii */
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		num = atoi(argv[i]);
		sum += num;
	}
	printf("%d\n", sum);
	return (0);
}
