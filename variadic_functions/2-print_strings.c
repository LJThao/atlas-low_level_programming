#include "variadic_functions.h"

/**
 * print_strings - function that prints strings, follow by a line
 * @separator: string to be printed
 * @n: # of strings to pass
 * Return: 0
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int z;
	char *t;

	va_list list;

	va_start(list, n);

	for (z = 0; z < n; z++)
	{
		t = va_arg(list, char *);
		if (!t)
			t = "nil";
		if (!separator)
			printf("%s", t);
		else if (separator && z == 0)
			printf("%s", t);
		else
			printf("%s%s", separator, t);
	}
	printf("\n");
	va_end(list);
}
