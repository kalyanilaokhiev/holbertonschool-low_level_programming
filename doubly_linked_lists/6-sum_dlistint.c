#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * sum_dlistint - sum of all int in list
 * @head: pointer to struct
 *
 * Return: sum
 */

int sum_dlistint(dlistint_t *head)
{
	int sum;

	sum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
