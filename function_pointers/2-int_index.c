#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 * @array: array
 * @size: size
 * @cmp: cmp
 * Return: -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int z = 0;

	if (size > 0)
	{
		if (array != NULL)
		if (cmp != NULL)
		{
			while (z < size)
			{
				if (cmp(array[z]))
					return (z);
				z++;
			}
		}
	}
	return (-1)
}
