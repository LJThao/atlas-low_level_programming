#include "function_pointers.h"

/**
 * print_name - a function that prints a name
 * @name: name
 * @f: pointer
 * Return: 0
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL)
	if (f != NULL)
		f(name);
}
