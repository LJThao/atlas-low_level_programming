#include "dog.h"
#include <stdlib.h> 

/**
 * new_dog - function that creates a new dog
 * @name: name
 * @age: age
 * @owner: owner
 * Return: ptr to dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int new;
	char *ptr;
	dog_t *d;

	if (name == 0 || owner == 0)
		return (NULL);
	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);

	for (new = 1, ptr = name; *ptr; new++)
		ptr++;
	d->name = malloc(new);
	if (d->name == 0)
	{
		free(d);
		return (NULL);
	}

	for (new = 1, ptr = owner; *ptr; new++)
		ptr++;
	d->owner = malloc(new);
	if (d->owner == 0)
	{
		free(d->name);
		free(d);
		return (NULL);
	}

	for (new = 0; *name != 0; new++, name++)
		d->name[new] = *name;
	d->name[new] = 0;
	for (new = 0; *owner != 0; new++)
		d->owner[new] = *owner++;
	d->owner[new] = 0;
	d->age = age;

	return (d);
}
