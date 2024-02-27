#include "function_pointers.h"

/**
 * array_iterator - function that executes a function on an array
 * @array: array
 * @size: size
 * @action: action
 * Return: 0
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int z = 0;

	if (array != NULL)
	if (action != NULL)
	if (size > 0)
	{
		while (z < size)
		{
			action(array[z]);
			z++;
		}
	}
}
