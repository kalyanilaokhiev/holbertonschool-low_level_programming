#include "main.h"
#include <stdio.h>

/**
 * print_list - print length of strings
 *
 * @h: pointer to list_t and inputs
 *
 * Return: counter
 */

size_t print_list(const list_t *h)
{
	int i;

	i = 0;

	while (h != NULL)
	{
		char *string;
		unsigned int length;

		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
		{
			length = h->len;
			string = h->str;

			/* print length and string */
			printf("[%u] %s\n", length, string);
		}
		i++;
		h = h->next;
	}
	return (i);
}
