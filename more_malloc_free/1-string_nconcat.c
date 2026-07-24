#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates 2 strings
 * @s1: first word
 * @s2: second word
 * @n: n amount of bytes of s2
 *
 * Return: pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int length1;
	unsigned int length2;
	unsigned int i;
	unsigned int j;


	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	length1 = 0;
	length2 = 0;

	while (s1[length1] != '\0')
		length1++;

	while (s2[length2] != '\0')
		length2++;

	if (n >= length2)
		n = length2;

	ptr = malloc(sizeof(char) * (length1 + n + 1));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < length1; i++)
		ptr[i] = s1[i];

	for (j = 0; j < n; j++, i++)
		ptr[i] = s2[j];

	ptr[i] = '\0';

	return (ptr);
}
