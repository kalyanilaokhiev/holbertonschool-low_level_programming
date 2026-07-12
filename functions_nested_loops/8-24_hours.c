#include "main.h"

/**
 * jack_bauer - starting point
 *
 * Description: prints every minute of the day
 * Return: every minute of the day
 */

void jack_bauer(void)
	{
		int hour;
		int minute;

		for (hour = 0; hour < 24; hour++)
		{
			for (col = 0; col < 60; minute++)
			{
				_putchar((hour / 10) + '0');
				_putchar((hour % 10) + '0');
				_putchar(':');
				_putchar((minute / 10) + '0');
				_putchar((minute % 10) + '0');
				_putchar('\n');
			}
		}
	}
