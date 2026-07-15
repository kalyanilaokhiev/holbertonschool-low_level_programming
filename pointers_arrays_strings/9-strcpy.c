#include "main.h"

/**
 * _strcpy - function that copies string pointed to by src
 * @dest: destination
 * @src: source string pointer
 *
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
			i++;
	}
	dest[i] = '\0';

	return (dest);
}
