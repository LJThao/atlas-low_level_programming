#include "main.h"

/**
 * rev_string - reverses a string
 * @s: reverse string
 * Return: void
 */

void rev_string(char *s)
{
	int l = 0, j = 0;
	char tmp;

	while (s[l++])
	l++;

	for (j = l - 1; j >= l / 2; j--)
	{
	tmp = s[j];
	s[j] = s[l - j - 1];
	s[l - j - 1] = tmp;
	}
}
