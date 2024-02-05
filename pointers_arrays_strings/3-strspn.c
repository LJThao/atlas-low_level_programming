#include "main.h"

/**
 * _strspn - Write a function that gets the length of a prefix substring.
 * @s: initial segment s
 * @accept: accept bytes
 * Return: Always 0
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int l, j, t, h;

	t = 0;

	for (l = 0; s[l] != '\0'; l++)
	{
		h = 0;

		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[l])
			{
				t++;
				h = 1;
			}
		}
		if (h == 0)
			return (t);
	}
	return (t);
}
