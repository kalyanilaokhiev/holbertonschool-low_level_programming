#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenate 2 strings
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to new memory
 */

char *str_concat(char *s1, char *s2)
{
	char *size;
	unsigned int i;
	unsigned int j;
	unsigned int l1;
	unsigned int l2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (l1 = 0; s1[l1] != '\0'; l1++);

	for (l2 = 0; s2[l2] != '\0'; l2++);

	size = malloc(sizeof(char) * (l1 + l2 + 1));

	if (size == 0)
		size = NULL;

	for (i = 0; i < (l1); i++)
	{
		size[i] = s1[i];
	}

	for (j = 0; j < (l2); j++)
	{
		size[i + j] = s2[j];
	}

	size[i + j] = '\0';

	return (size);
}
