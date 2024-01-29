#include "main.h"

/**
 * puts2 = prints every other character
 * @str: string
 * Return: void
 */

void puts2(char *str)
{
	int l;
	int j = 0;

	while (str[j] != '0')
	{
	j++;
	}

	for (l = 0; l < j; l += 2)
	{
	_putchar(str[l]);
	}
	_putchar('\n');
}
