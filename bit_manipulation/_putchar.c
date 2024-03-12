#include <unistd.h>
#include "main.h"

/**
 * _putchar = writing char c
 * @c: char c
 * Return: 0
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
