#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - function that concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: int n
 * Return: strings
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int Y = 0, F = 0, T = 0, O = 0;
	char *str;

	if (s1 == NULL)
		s1 = "";

	while (s1[Y])
		Y++;

	while (s2[T])
		T++;

	if (n >= T)
		O = Y + T;
	else
		O = Y + n;

	str = malloc(sizeof(char) * 1 + 1);
	if (str == NULL)
		return (NULL);

	T = 0;
	while (F < O)
	{
		if (F <= Y)
			str[F] = s1[F];
		
		if (F >= Y)
		{
			str[F] = s2[T];
			T++;
		}
		F++;
	}
	str[F] = '\0';
	return (str);
}
