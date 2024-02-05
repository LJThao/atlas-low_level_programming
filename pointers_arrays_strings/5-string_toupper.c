#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase.
 * @str: uppercase string
 * Return: str string
 */

char *string_toupper(char *str)
{
	int ljt = 0;

	while (str[ljt])
	{
		if (str[ljt] >= 'a' && str[ljt] <= 'z')
			str[ljt] -= 32;
		ljt++;
	}
	return (str);
}
