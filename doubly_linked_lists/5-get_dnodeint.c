#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * get_dnodeint_at_index - find int at index given
 * @head: pointer to first node
 * @index: target index
 *
 * Return: head or NULL if out of bounds
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	i = 0;

	if (head == NULL)
		return (NULL);


	while (head != NULL && i < index)
	{
		i++;
		head = head->next; /* if not correct i, move head to next */
	}
	return (head);
}
