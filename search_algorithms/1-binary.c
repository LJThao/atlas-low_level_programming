#include "search_algos.h"

/**
 * binary_search - function that searches for a value in a sorted array of ints
 * @array: pointer to the 1st element
 * @size: number of elements
 * @value: value to search for
 * Return: if value is not present in array or is NULL, then -1
 */

int binary_search(int *array, size_t size, int value)
{
	int left = 0;
	int right = size - 1;
	int mid, e;

	while (left <= right)
	{
		printf("Searching in array: ");
		for e = left; e <= right; e++)
		{
			printf("%d", array[e]);
			if (e < right)
				printf(", ");
		}
		printf("\n");

		mid = left + (right - left) / 2;

		if (array[mid] == value)
			return (mid);
		if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}
	return (-1);
}
