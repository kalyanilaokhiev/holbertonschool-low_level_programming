#include "main.h"
#include <stdlib.h>

/**
 * _calloc - alloctes memory for an array
 * @nmemb: elements in the array
 * @size: size of bytes
 *
 * Return: pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int total_size;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	total_size = nmemb * size;

	ptr = malloc(total_size);

	if (ptr == NULL)
		return (NULL);

	i = 0;

	while (i < total_size)
	{
		/* cast to char * to step through each memory 1 byte at a time */
		((char *)ptr)[i] = 0;
		i++;
	}
	return (ptr);
}
