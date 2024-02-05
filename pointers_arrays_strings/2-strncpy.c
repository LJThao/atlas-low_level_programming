#include "main.h"

/**
 * _strncpy - Write a function that copies a string
 * @dest: dest string.
 * @src: source string.
 * @n: int n of bytes.
 * Return: string to dest string.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int lj = 0, src_len = 0;

	while (src[lj++])
	src_len++;
	
	for (lj = 0; src[lj] && lj < n; lj++)
	dest[lj] = src[lj];
	
	for (lj = src_len; lj < n; lj++)
	dest[lj] = '\0';
	
	return (dest);
}
