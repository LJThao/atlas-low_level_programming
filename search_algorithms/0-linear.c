#include "search_algos.h"

/**
 * linear_search - function that searches for a value in an arry of ints
 * @array: pointer to first element
 * @size: number of elements
 * @value: value to search for
 * Return: if value is not present or is NULL, then -1
 */

int linear_search(int *array, size_t size, int value)
{
	size_t e;

	if (array == NULL)
	{
		return (-1);
	}
	for (e = 0; e < size; e++)
	{
		printf("Value checked array[%ld] = [%d]\n", e, array[e]);
		if (array[e] == value)
			return (e);
	}
	return (-1);
}
