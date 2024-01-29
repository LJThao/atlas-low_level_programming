#include "main.h"

/**
 * print_line - draws a straight line
 * @n: is # of times for _
 * Return: Always (0)
 */

int print_line(int n)
{
	int lj;
	
	if (n <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (lj = 0; lj < n; lj++)
	{
	_putchar(95);
	}
	_putchar('\n');
	}
}
