#include "main.h"

/**
 * clear_bit - function that sets the value of a bit to 0
 * @n: int n
 * @index: int index
 * Return: 1 if it worked, or -1 if error
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = *n & ~(1ul << index);
	return (1);
}
