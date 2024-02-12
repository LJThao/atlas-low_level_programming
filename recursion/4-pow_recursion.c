#include "main.h"

/**
 * _pow_recursion - returns the value x, raise to y
 * @x: int x
 * @y: int y
 * Return: values of y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return(x * _pow_recursion(x, y - 1));
}
