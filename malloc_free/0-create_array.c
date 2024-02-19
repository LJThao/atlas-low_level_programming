#include "main.h"
#include <stdlib.h>

/**
 * create_array - create an array of chars, and initiate it
 * @size: array size
 * @c: specific char
 * Return: s
 */

char *create_array(unsigned int size, char c)
{
	unsigned int Y;
	char *s;

	if (size == 0)
		return (NULL);

	s = malloc(size * sizeof(char));

	if (s == NULL)
		return (NULL);

	for (Y = 0; Y < size; Y++)
	{
		s[Y] = c;
	}
	return (s);
}
