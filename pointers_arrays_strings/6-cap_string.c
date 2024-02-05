#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @str: string
 * Return: str value
 */

char *cap_string(char *str)
{
	int l = 0, i;
	int j = 13;
	char spc[] = {32, '\t', '\n', 44, ';', 46, '!', '?', '"', '(', ')', '{', '}'};

	while (str[l])
	{
		i = 0;

		while (i < j)
		{
			if ((l == 0 || str[l - 1] == j[i]) && (str[l] >= 97 && str[l] <= 122))
				str[l] -= 32;
			i++;
		}
		l++;
	}
	return (str);
}
