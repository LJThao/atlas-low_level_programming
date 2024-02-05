#include "main.h"

/**
 * _memcpy - Write a function that copies memory area.
 * @dest: dest memory area
 * @src: src memory area
 * @n: int n bytes
 * Return: Always 0
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int l;

	for (l = 0; l < n; l++)
		dest[l] = src[l];
	return (dest);
}
