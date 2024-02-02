#include "main.h"

/**
 * _strcat - Write a function that concatenates two strings
 * @src: src string
 * @dest: dest string
 * Return: the dest string
 */

char *_strcat(char *dest, char *src)
{
	int s = 0, i;
	while (dest[s])
	{
	s++;
	}
	for (i = 0; src[i] != 0; i++;
	{
	dest[s] = src[i];
	s++;
	}
	dest[s] = '\0';
	return (dest);
}
