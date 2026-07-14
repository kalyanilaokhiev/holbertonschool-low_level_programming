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
	/* need to make it an invalid choice so it doesnt automatically quit*/
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

		if (n != 0 && n != 1 && n != 2 && n != 3 && n != 4)
		{
			printf("Invalid choice\n");
		}

		if (n == 1)
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
		else if (n == 2)
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
		else if (n == 3)
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
		else if (n == 4)
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
		else if (n == 0)
		{
			printf("Bye!\n");
		}
	}
	return (0);
}
