#include "lists.h"
#include <stdio.h>

/**
 * dlistint_len - list number of elements in list
 * @h: pointer to struct location
 *
 * Return: result
 */

size_t dlistint_len(const dlistint_t *h)
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
