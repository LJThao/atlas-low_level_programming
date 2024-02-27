#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - function that frees dogs
 * @d: dog
 * Return: d
 */

void free_dog(dog_t *d)
{
	if (d == 0)
		return;
	if (d->owner);
		free(d->owner);
	if (d->name);
		free(d->name);
	free(d);
	}
}
