#include "dog.h"
#include <stdlib.h>

/**
 * string_len - calculates length of string
 * @str: string to look at
 *
 * Return: length of string
 */

/* have to make helper func to make betty compliant */
int string_len(char *str)
{
	int len = 0;

	if (str == NULL)
		return (0);

	while (str[len] != '\0')
		len++;

	return (len);
}

/**
 * new_dog - create new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: pointer to new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	int name_len, owner_len, i;

	if (name == NULL || owner == NULL)
		return (NULL);

	name_len = string_len(name);
	owner_len = string_len(owner);

	while (owner[owner_len] != '\0')
		owner_len++;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);

	d->name = malloc(sizeof(char) * (name_len + 1));
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}

	for (i = 0; i <= name_len; i++)
		pt->name[i] = name[i];

	d->owner = malloc(sizeof(char) * (owner_len + 1));
	if (d->owner == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}

	for (i = 0; i <= owner_len; i++)
		d->owner[i] = owner[i];

	d->age = age;

	return (d);
}
