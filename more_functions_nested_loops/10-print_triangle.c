#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: the size of the triangle
 * Return: empty
 */

void print_triangle(int size)
{
	int l, j, t;

	if (size <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (l = 0; l < size; l++)
	{
	for (j = size - l; j > 1; j--)
	{
	_putchar(32);
	}
	for (t = 0; t <= l; t++)
	{
	_putchar(35);
	}
	_putchar('\n');
	}
	}
}
