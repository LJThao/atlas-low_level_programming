#include "main.h"

/**
 * flip_bits - function that returns the number of bits
 * @n: int n
 * @m: int m
 * Return: a
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int a = 0;

	while (n != 0 || m != 0)
	{
		if ((n & 1) != (m & 1))
			a++;
		m = m >> 1;
		n = n >> 1;
	}
	return (a);
}
