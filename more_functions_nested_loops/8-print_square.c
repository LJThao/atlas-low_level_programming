include "main.h"

/**
 * print_square - prints a square
 * @size: the size of the square
 * Return: empty
 */

void print_square(int size)
{
	int l, j;

	if (size <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (l = 0; l < size; l++)
	{
	for (j = 0; j < size; j++)
	{
	_putchar(35);
	}
	_putchar('\n');
	}
	}
}
