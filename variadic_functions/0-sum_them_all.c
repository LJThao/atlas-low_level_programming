#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - function that returns the sum
 * @n: # of arguments
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int z;
	int sum = 0;

	va_list list;

	va_start(list, n);

	for (z = 0; z < n; z++)
		sum += va_arg(list, int);
	va_end(list);
	return (sum);
}
