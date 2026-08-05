#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node - adding new node to head of list
 * @head: head of list
 * @str: string to be added
 *
 * Return: new string to be added at head
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	char *new_str;
	unsigned int len;

	/* malloc size of list_t */
	new_node = malloc(sizeof(list_t));

	/* using strdup to dup string into memory */
	new_str = strdup(str);

	/* freeing the memory if null */
	if (new_node == NULL)
	{
		free(new_str);
		return (NULL);
	}

	if (new_str == NULL)
		return (NULL);

	/* counting length of string */
	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}

	/* adding new variables into struct */
	new_node->str = new_str;
	new_node->len = len;
	new_node->next = *head;

	/* updates original head to new node */
	*head = new_node;

	return (new_node);
}
