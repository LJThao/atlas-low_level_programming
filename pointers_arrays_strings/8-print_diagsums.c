#include "main.h"

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix of integers.
 * @a: int a
 * @size: int size
 * Return: Always 0
 */

void print_diagsums(int *a, int size)
{
	int l, j, sum1 = 0, sum2 = 0;

	for (l = 0; i <= (size * size); l = l + size + 1)
		sum1 = sum1 + a[l];

	for (j = size - 1; j <= (size * size) - size; j = j + size - 1)
		sum2 = sum2 + a[j];
	printf ("%d, %d\n", sum1, sum2);
}
