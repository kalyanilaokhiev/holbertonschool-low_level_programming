#include "main.h"

/**
 * cap_string - caps all words of a string
 * @str: string to be printed
 *
 * Return: pointer to new string
 */

char *cap_string(char *str)
{
	int i;
	int j;
	char separators[] = " \t\n,;.!?\"(){}";

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (i == 0)
			{
				str[i] = str[i] - 32;
			}
			else
			{
				for (j = 0; seperators[j] != '\0'; j++)
				{
					if (str[i - 1] == seperators[j])
					{
						str[i] = str[i] - 32;
						break;
					}
				}
			}
			i++;
		}
		return (str);
	}
