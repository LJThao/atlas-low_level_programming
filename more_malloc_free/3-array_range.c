#include "main.h"
#include <stdlib.h>

/**
 * array_range - a function that creates an array of ints
 * @min: int min
 * @max: int max
 * Return: ints
 */

int *array_range(int min, int max)
{
	int *a, r = 0;

	if (min > max)
		return (NULL);

	a = malloc((sizeof(int) * (max - min)) + sizeof(int));

	if (a == NULL)
		return (NULL);

	while (min <= max)
	{
		a[r] = min;
		r++;
		min++;
	}
	return (a);
}
