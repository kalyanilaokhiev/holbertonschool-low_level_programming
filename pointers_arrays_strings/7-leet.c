#include "main.h"

/**
 * leet - encoding string
 * @str: string to change
 *
 * Return: pointer to encription
 */

char *leet(char *str)
{
	int i;
	int j;
	char letters[] = "aAeEoOtTlL";
	char replace[] = "4433007711";

	i = 0;

	while (str[1] != '\0')
	{
		for (j = 0; letters[j] != '\0'; j++)
		{
			if (str[i] == letters[j])
			{
				str[i] = replace[j];
				break;
			}
		}
		i++;
	}
	return (str);
}
