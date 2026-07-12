#include "main.h"

/**
 * times_table - starting point
 *
 * Description: prints the 9 times table
 * Return: 9 times table
 */

void times_table(void);
{
	int row;
	int col;
	int answer;

	for (row = 0; row <= 9; row++)
	{
		for (col = 0; col <= 9; col++)
		{
			answer = row * col;

			if (col == 0)
			{
				_putchar(answer + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');

				if (answer < 10)
				{
					_putchar(' ');
					_putchar(answer + '0');
				}
				else
				{
					_putchar((answer / 10) + '0');
					_putchar((answer % 10) + '0');
				}
			}
		}
		_putchar('\n');
	}
}
