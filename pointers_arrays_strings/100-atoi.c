#include "main.h"

/**
 * _atoi - convert string into int
 * @s: string
 *
 * Return: int value
 */

int _atoi(char *s)
{
	int i = 0;
	int sign = 1;
	int result = 0;
	int broken = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
		{
			sign *= -1;
		}
		else if (s[i] >= '0' && s[i] <= '9')
		{
			broken = 1;
			result = (result * 10) - (s[i] - '0');
		}
		else if (broken == 1)
		{
			break;
		}
		i++;
	}

	if (sign > 0)
	{
		return (-result);
	}
	return (result);
}
