#include "variadic_functions.h"

/**
 * print_all - functions that prints anything
 * @format: list of types of arguments
 * Return: 0
 */

void print_all(const char * const format, ...)
{
	int z = 0;
	char *t, *u = "";

	va_list list;

	va_start(list, format);

	if (format)
	{
		while(format[z])
		{
			switch(format[z])
			{
				case 'c':
					printf("%c%s", u, va_arg(list, int));
					break;

				case 'i':
					printf("%d%s", u, va_arg(list, int));
					break;
				case 'f':
					printf("%f%s", u, va_arg(list, double));
					break;
				case 's':
					t = va_arg(list, char *);
					if (t == NULL)
						t = "(nil)";
					printf("%s%s", t, u);
					break;
				default:
					z++;
					continue;
			}
			u = ",";
			z++;
		}
	}
	printf("\n");
	va_end(list);
}
