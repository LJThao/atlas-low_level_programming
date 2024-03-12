#include "main.h"

/**
 * set_bit - function that sets the value of a bit to 1
 * @n: int n
 * @index: int index
 * Return: 1 if worked or -1 if error
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bit;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	bit = 1 << index;
	*n = *n | bit;
	return (1);
}
