#include "main.h"

/**
 * get_bit - function that returns the value of a bit
 * @n: int n
 * @index: int index
 * Return: value of bit or -1 if error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int bit;

	if (index > 63)
		return (-1);

	bit = 1 << index;
	return ((n & bit) > 0);
}
