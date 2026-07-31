#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - checking for errors and printing result
 *
 * @argc: number of strings in array
 * @argv: array of strings in argc
 *
 * Return: result of the numbers and respective operation
 */

int main(int argc, char *argv[])
{
	int num1, num2;
	int (*operation)(int, int);
	int result;

	/* checks num of args inputted is correct */
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	/* getting the operation string */
	operation = get_op_func(argv[2]);

	/* checking if operation isnt one in array */
	if (operation == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	/* checking if divisiable by 0 */
	if ((*argv[2] == '/' || *argv[2] == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	/* if successful run correct func and print */
	result = operation(num1, num2);
	printf("%d\n", result);

	return (0);
}
