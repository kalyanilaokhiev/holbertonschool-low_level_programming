#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node_end - adding node to the end
 * @head: head of list
 * @str: string to be added
 *
 * Return: node added at end
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *current_node;
	char *new_str;
	unsigned int len;

	new_node = malloc(sizeof(list_t));
	new_str = strdup(str);

	if (new_node == NULL)
	{
		free(new_str);
		return (NULL);
	}

	if (new_str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	len = 0;
	while (str[len] != '\0')
		len++;

	new_node->str = new_str;
	new_node->len = len;
	new_node->next = NULL; /* next node will be null bc at end */

	if (*head == NULL) /* check if linked list empty */
	{
		*head = new_node; /* only node in list */
		return (new_node);
	}

	current_node = *head; /*if already has nodes */
	while (current_node->next != NULL)
		/* current node moved to next node until next node is null */
		current_node = current_node->next;
	current_node->next = new_node; /* attach new node to end */
	return (new_node);
}
