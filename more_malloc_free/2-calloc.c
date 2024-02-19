#include "main.h"
#include <stdlib.h>

/**
 * calloc - allocates memory for an array, using malloc
 * @nmemb: int nmemb
 * @size: int size
 * Return: char L
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int Y = 0, T = 0;
	char *L;

	if (nmemb == 0)
	if (size == 0)
		return (NULL);

	T = nmemb * size;
	L = malloc(Y);

	if (L == NULL)
		return (NULL);

	while (Y < T)
	{
		L[Y] = 0;
		Y++;
	}
	return (L);
}
