#include "main.h"

/**
 * print_binary - function that prints the binary rep of a #
 * @n: int n
 * Return: void
 */

void print_binary(unsigned long int n)
{
	unsigned long int bin = 1ul << 63;
	char a = '0';

	while (!(bin & n) && bin != 0)
		bin = bin >> 1;

	if (bin == 0)
		write(1, &a, 1);

	while (bin)
	{
		if (bin & n)
			a = '1';
		else
			a = '0';
		write(1, &a, 1);
		bin = bin >> 1;
	}
}
