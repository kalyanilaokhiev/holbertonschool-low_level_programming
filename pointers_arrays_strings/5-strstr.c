#include "main.h"

/**
 * _strstr - finds the first occurence of the substring
 * needle in the haystack
 * @haystack: words that you are looking through
 * @needle: the one word
 *
 * Return: pointer to the beginning of located substring
 * or NULL
 */

char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;

	if (*needle == '\0')
	{
		return (haystack);
	}

	for (i = 0; haystack[i] != '\0'; i++)
	{
		j = 0;

		while (needle[j] == haystack[i + j] && needle[j] != '\0')
		{
			j++;
		}

		if (needle[j] == '\0')
		{
			return (haystack + i);
		}
	}
	return (NULL);
}
