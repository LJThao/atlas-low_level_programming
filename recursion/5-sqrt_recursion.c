#include "main.h"
#include <stdio.h>

int _sqrt(int n, int i)

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: int n to find the square root
 * Return: square root of the number
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - finding square root
 * @n: int n
 * @i: int i
 * Return: square root of the number
 */

int _sqrt(int n, int i)
{
	int sqrt = i * i;

	if (sqrt > n)
		return (-1);

	if (sqrt == n)
		return (i);
	return (_sqrt(n, i + 1));
}
