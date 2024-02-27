#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - function that returns the sum
 * @n: int n
 * Return: 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int s = 0;
	int sum = 0;

	if (n != 0)
	{
		va_start(args, n);

		while(s < n)
		{
			sum += va_arg(args, int);
			s++;
		}
		va_end(args);
		return (sum);
	}
	return (0);
}
