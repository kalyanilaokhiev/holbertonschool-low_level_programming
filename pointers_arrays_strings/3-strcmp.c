#include "main.h"

/**
 * _strcmp - compares 2 strings
 * @s1: first source string
 * @s2: second source string
 *
 * Return: negative int if s1 < s2, positive s1 > s2
 */

int _strcmp(char *s1, char *s2)
{
	int i;
	int j;

	i = 0;
	j = 0;

	while (s1[i] == s2[i] && s1[i] != '\0')
	{
		i++;
	}

	result = (s1[i] - s2[i]);
	return (result);
}
