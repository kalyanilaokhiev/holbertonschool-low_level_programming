#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_dnodeint_end - adding node to the end
 * @head: pointer to first node struct
 * @n: integer input
 *
 * Return: addr of new element or NULL if failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *current_node;

	/* malloc size of dlistint_t */
	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	/* since last node */
	new_node->next = NULL;
	/* if no nodes in list */
	new_node->prev = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}


	current_node = *head;
	/*if already has nodes */
	while (current_node->next != NULL)
	{
		/* current node moved to next node until next node is null */
		current_node = current_node->next;
	}

	current_node->next = new_node; /* attach new node to end */
	new_node->prev = current_node; /* new node points backwards to old node */
	return (new_node);
}
