#include "main.h"
#include <stdio.h>

int prime(int n, int i);

/**
 * is_prime_number - input integer is a prime then return
 * @n: int n
 * Return: int n
 */

int is_prime_number(int n)
{
	return (prime(n, 1));
}

/**
 * prime - number is prime
 * @n: int n
 * @i: int i
 * Return: 1 or 0
 */

int prime(int n, int i)
{
	if (n <= 1)
		return (0);

	if (n % i == 0 && i > 1)
		return (0);

	if ((n / i) < i)
		return (1);
	return (prime(n, i + 1));
}
