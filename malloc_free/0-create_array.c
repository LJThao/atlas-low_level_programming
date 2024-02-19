#include "main.h"
#include <stdlib.h>

/**
 * create_array - create an array of chars, and initiate it with a specific char
 * @size: array size
 * @c: specific char
 * Return: specific char
 */

char *create_array(unsigned int size, char c)
{
	unsigned int A;
	char *s;

	if (size == 0)
		return (NULL);

	s = malloc(size * sizeof(char));

	if (s == NULL)
		return (NULL);

	for (A = 0; A < size; A++)
	{
		s[A] = c;
	}
	return
}
