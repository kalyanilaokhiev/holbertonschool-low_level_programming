#include "lists.h"

/**
 * list_len - list number of elements
 * @h: pointer to list_t and inputs
 *
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	int i;

	i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}

