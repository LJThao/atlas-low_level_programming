#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array
 * @a: array
 * @n: elements
 * Return: void
 */

void print_array(int *a, int n)
{
	int y;

	for (y = 0; y < n; y++)
	{
	printf("%d", a[y]);
	if (y != (n - 1))
	{
	printf(", ");
	}
	}
	printf("\n");
}
