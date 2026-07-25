#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initialise a variable of struct dog
 * @d: pointer to struct dog to initialise
 * @name: name to initialise
 * @age: age to initialise
 * @owner: owner to initliase
 *
 * Return: nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
