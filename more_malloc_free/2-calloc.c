#include "main.h"
#include <stdlib.h>

/**
 * calloc - allocates memory for an array, using malloc
 * @nmemb: int nmemb
 * @size: int size
 * Return: char c
 */

void _calloc(unsigned int nmemb, unsigned int size)
{
	int Y = 0, T = 0;
	char *c;

	if (nmemb == 0 || size == 0)
		return (NULL);

	T = nmemb * size;
	c = malloc(T);

	if (c == NULL)
		return (NULL);

	while (Y < T)
	{
		c[Y] = 0;
		Y++;
	}

	return (c);
}
