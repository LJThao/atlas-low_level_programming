#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: the # of times the character prints
 * Return: empty
 */

void print_diagonal(int n)
{
	int l, j;

	if (n <= 0)
	{
	_putchar ('\n');
	}
	else
	{
	for (l = 0; l < n; l++)
	{
	for (j = 0; j < x; j++)
	{
	_putchar(32);
	}
	_putchar(92);
	_putchar('\n');
	}
	}
}
