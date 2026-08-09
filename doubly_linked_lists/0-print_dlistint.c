#include "lists.h"
#include <stdio.h>


/**
 * print_dlistint - printing elements of list
 * @h: pointer to struct location
 *
 * Return: elements
 */

size_t print_dlistint(const dlistint_t *h)
{
	int i;

	i = 0;

	while (h != NULL)
	{
		int number;

		number = h->n;

		printf("%i\n", number);

		i++;
		h = h->next;
	}
	return (i);

}
