#include "main.h"

/**
 * reverse_array - Write a function that reverses the content of an array of integers.
 * @a: array of integers
 * @n: number of elements
 */

void reverse_array(int *a, int n)
{
	int lj, t;

	for (t = n - 1; t >=n / 2; t--)
	{
	lj = a[n - 1 - t];
	a[n - 1 - t] = a[t];
	a[t] = lj;
	}
}
