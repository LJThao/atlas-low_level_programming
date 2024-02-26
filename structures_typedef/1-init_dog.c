#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - function that initialize a variable
 * @d: struct dog
 * @name: name
 * @age: age
 * @owner: owner
 * Return: 0
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
