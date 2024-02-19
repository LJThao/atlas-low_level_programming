#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - function that allocates memory using malloc
 * @b: int b
 * Return: 0
 */

void *malloc_checked(unsigned int b)
{
	void *Y;

	Y = malloc(b);

	if (Y == NULL)
		exit(98);
	
	return (Y);
}
