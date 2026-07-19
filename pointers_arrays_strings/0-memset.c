#include "main.h"

/**
 * _memset - fills memory with a byte
 * @s: memory area to be filled
 * @b: constant byte to fill the memory with
 * @n: number of bytes to be filled
 *
 * Return: pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
