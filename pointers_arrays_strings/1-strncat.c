#include "main.h"

/**
 *  _strncat - Write a function that concatenates two strings.
 *  @dest: resulting string
 *  @src: src string
 *  @n: integer n
 *  Return: src string to resulting string
 */

char *_strncat(char *dest, char *src, int n)
{
	int lj = 0, th = 0;

	while (dest[lj++])
	th++;
	for (lj = 0; src[lj] && lj < n; lj++)
	dest[th++] = src[lj];
	return (dest);
}
