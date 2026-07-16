#include <stdio.h>

/**
 * main - starting point
 * add: adding funtion
 * subtract: subtract function
 * multiply - multiply function
 * divide - divide function
 *
 * Description: printing welcome line, menu and
 * quitting with option 0
 * Return: void
 */

void add(void)
{
	int A;
	int B;
	int result;

	printf("A: ");
	scanf("%d", &A);

	printf("B: ");
	scanf("%d", &B);

	result = (A + B);

	printf("Result: %d\n", result);
}

void subtract(void)
{
	int A;
	int B;
	int result;

	printf("A: ");
	scanf("%d", &A);
	printf("B: ");
	scanf("%d", &B);

	result = (A - B);
	printf("Result: %d\n", result);
}

void multiply(void)
{
	int A;
	int B;
	int result;

	printf("A: ");
	scanf("%d", &A);
	printf("B: ");
	scanf("%d", &B);

	result = (A * B);
	printf("Result: %d\n", result);
}

void divide(void)
{
	int A;
	int B;
	int result;

	printf("A: ");
	scanf("%d", &A);
	printf("B: ");
	scanf("%d", &B);

	if (B == 0)
	{
		printf("Error: division by zero\n");
	}

	else
	{
		result = (A / B);
		printf("Result: %d\n", result);
	}
}

int main(void)
{
	int n = -1;

	printf("Simple Calculator\n");
	printf("1) Add\n");
	printf("2) Subtract\n");
	printf("3) Multiply\n");
	printf("4) Divide\n");
	printf("0) Quit\n");

	while (n != 0)
	{
		printf("Choice: ");
		scanf("%d", &n);

		if (n == 1)
		{
			add();
		}
		else if (n == 2)
		{
			subtract();
		}
		else if (n == 3)
		{
			multiply();
		}
		else if (n == 4)
		{
			divide();
		}
		else if (n == 0)
		{
			printf("Bye!\n");
		}
		else
		{
			printf("Invalid choice\n");
		}
	}
	return (0);
}
