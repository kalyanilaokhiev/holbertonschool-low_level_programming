#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_dnodeint - adding node to the front
 * @head: pointer to first node struct
 * @n: integer input
 *
 * Return: addr of new element or NULL if failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	/* malloc size of dlistint_t */
	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	new_node->prev = NULL;

	/* if list is not empty */
	if (*head != NULL)
		(*head)->prev = new_node;

	*head = new_node;

	return (new_node);
}
