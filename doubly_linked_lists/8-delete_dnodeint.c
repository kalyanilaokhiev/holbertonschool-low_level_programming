#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - deleting node at given index
 * @head: pointer to struct
 * @index: index of node to be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current_node;
	unsigned int i;

	i = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	current_node = *head;

	/* delete head node */
	if (index == 0)
	{
		*head = current_node->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(current_node);
		return (1);
	}

	/* move to new node */
	while (current_node != NULL && i < index)
	{
		current_node = current_node->next;
		i++;
	}

	if (current_node == NULL)
		return (-1); /* out of range */

	/* relink the nodes */
	current_node->prev->next = current_node->next;

	/* if not last node, update next node prev pointer */
	if (current_node->next != NULL)
		current_node->next->prev = current_node->prev;

	free(current_node);
	return (1);
}
