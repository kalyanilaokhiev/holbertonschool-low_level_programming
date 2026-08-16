#include "hash_tables.h"

/**
 * key_index - function that gives you the index of a key
 * @key: key integers
 * @size: size of array of hash table
 *
 * Return: index that key/value pair should be stored in array
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;

	/* using func to convert key into a long int */
	hash = hash_djb2(key);

	/* makes sure hash size is small enough to fit in array */
	hash = hash % size;

	return (hash);
}
