#include "hash_tables.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * hash_table_create - create a hash table
 * @size: size of array
 *
 * Return: pointer to newly created hash or null if failed
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	unsigned long int i;

	if (size == 0)
	{
		return (NULL);
	}

	/* allocate memory for main hash table structure */
	table = malloc(sizeof(hash_table_t));

	if (table == NULL)
		return (NULL);

	/* store array size inside structure */
	table->size = size;

	/* allocate memory for array of node pointers */
	table->array = malloc(sizeof(hash_node_t *) * size);

	if (table->array == NULL)
	{
		free(table);
		return (NULL);
	}

	i = 0;
	/* initialise each pointer to null */
	while (i < size)
	{
		table->array[i] = NULL;
		i++;
	}

	return (table);
}
