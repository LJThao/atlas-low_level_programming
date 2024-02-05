#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: memory area s
 * @b: constand byte b
 * @n: bytes of the memory area
 * Return: Always 0
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int l;

	for (l = 0; l < n; l++)
		s[l] = b;
	return (s);
}
