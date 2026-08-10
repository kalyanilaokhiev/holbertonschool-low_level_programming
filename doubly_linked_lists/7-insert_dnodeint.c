#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - inserting a new node at a given position
 * @h: pointer to struct
 * @idx: index of list where node should be added
 * @n: number to be added
 *
 * Return: the address of the new node, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node;
	dlistint_t *current_node;

	unsigned int i;

	i = 0;

	/* malloc size of dlistint_t */
	new_node = malloc(sizeof(dlistint_t));

	/* if idx at start at list, call func */
	if (idx == 0)
		return (add_dnodeint(h, n));

	if (*h == NULL)
		return (NULL);

	current_node = *h;

	/* stop before where new node goes */
	while (current_node != NULL && i < idx - 1)
	{
		i++;
		current_node = current_node->next;
	}

	/* if node end of list, add node there */
	if (current_node->next == NULL)
		return (add_dnodeint_end(h, n));

	new_node->n = n;
	/* next new node point to node after current */
	new_node->next = current_node->next;
	new_node->prev = current_node;
	/* update node after current to point back to new_node */
	current_node->next->prev = new_node;
	/* update current to point forward to new_node */
	current_node->next = new_node;

	return (*h);
}
