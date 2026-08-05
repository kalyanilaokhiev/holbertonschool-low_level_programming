#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * free_list - freeing list
 * @head: pointer to node at start of list
 */

void free_list(list_t *head)
{
	/* create temporary node pointer */
	list_t *temp;

	while (head != NULL)
	{
		/* copy next addr into temp*/
		temp = head->next;
		/* free string from og addr */
		free(head->str);
		/* free memory allocation too */
		free(head);
		/* update freed head to temp */
		head = temp;
	}
}
