#include "main.h"

/**
 * _strpbrk - Searches a string for any of a set of bytes.
 * @s: string of s
 * @accept: string of accept
 * Return: Always 0
 */

char *_strpbrk(char *s, char *accept)
{
	int l, j;

	for (l = 0; s[l] != '0'; l++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[l] == accept[j])
				return (s + l);
		}
		return (0);
	}
}
