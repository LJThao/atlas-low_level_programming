#include "main.h"

/**
 * _strchr - Write a function that locates a character in a string.
 * @s: string s
 * @c: character c
 * Return: Always 0
 */

char *_strchr(char *s, char c)
{
	int l;

	for (l = 0; s[l] >= '\0'; l++)
	{
		if (s[l] == c)
			return (s + l);
	}
	return (NULL);
}
