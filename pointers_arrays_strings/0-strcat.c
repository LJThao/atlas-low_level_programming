#include "main.h"

/**
 * _strcat - Write a function that concatenates two strings
 * @src: src string
 * @dest: dest string
 * Return: the dest string
 */

char *_strcat(char *dest, char *src)
{
	int dlen = 0, i;
	while (dest[dlen])
	{
	dlen++;
	}
	for (i = 0; src[i] != 0; i++;
	{
	dest[dlen] = src[i];
	dlen++;
	}
	dest[dlen] = '\0';
	return (dest);
}
