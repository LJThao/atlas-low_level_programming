#include "main.h"
#include <stdlib.h>

/**
 * _strdup - a function tha returns a pointer
 * @str: string
 * Return: string
 */

char *_strdup(char *str)
{
	int L = 0, J = 1;
	char *s;

	if (str == NULL)
		return (NULL);

	while (str[J])
	{
		J++;
	}

	s = malloc((sizeof(char) * J) + 1);

	if (s == NULL)
		return (NULL);

	while (L < J)
	{

		s[L] = str[L];
		L++;
	}

	s[L] = '\0';
	return (s);
}
