#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * free_dlistint - free list
 * @head: pointer to struct
 */

void free_dlistint(dlistint_t *head)
{
	/* create temporary node pointer */
	dlistint_t *temp;

	while (head != NULL)
	{
		/* copy next addr into temp*/
		temp = head->next;
		/* free memory addr */
		free(head);
		/* update freed head to temp */
		head = temp;
	}
}
