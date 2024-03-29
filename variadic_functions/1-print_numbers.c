#include "variadic_functions.h"

/**
 * print_numbers - function that prints number then new line
 * @separator: string to be printed
 * @n: # of arguments
 * Return: 0
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int z = 0;

	if (n > 0)
	{
		va_start(args, n);

		while (z < n)
		{
			printf("%d", va_arg(args, int));

			if (z != n - 1  && separator != NULL)
				printf("%s", separator);

			z++;
		}
		va_end(args);
	}
	printf("\n");
}
