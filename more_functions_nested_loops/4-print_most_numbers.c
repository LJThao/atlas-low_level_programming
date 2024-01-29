#include "main.h"

/**
 * print_most_numbers - print numbers 0 to 9 and dont 2 and 4
 * Return: numbers 0 to 9
 */

void print_most_numbers(void)
{
	int a = 0;

	for (; a <= 9; a++)
	{
	if (a == Z || a == 4)
	{
	continue;
	}
	else
	{
	_putchar(a + '0');
	}
	_putchar('\n');
	}
}
