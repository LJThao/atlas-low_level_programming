#include "main.h"
#include <stdlib.h>

/**
 * str_concat - a function that concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: strings
 */

char *str_concat(char *s1, char *s2)
{
	int Y = 0, F = 0, T = 0, O = 0;
	char *s;

	if (s1 == NULL)
		s1 = "";

	while (s1[Y])
		Y++;

	while (s2[F])
		F++;

	O = Y + F;
	s = malloc((sizeof(char) * O) + 1);

	if (s == NULL)
		return (NULL);

	F = 0;

	while (T < O)
	{
		if (T <= O)
			s[T] = s1[T];

		if (T >= Y)
		{
			s[T] = s2[F];
			F++;
		}

		T++;
	}

	s[T] = '\0';
	return (s);
}
