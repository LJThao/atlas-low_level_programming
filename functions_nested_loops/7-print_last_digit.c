#include "main.h"

/**
 * print_last_digit.c - prints the last digit of a number
 * @c: the number
 * Return: returns the last digit of a number
 */
int print_last_digit(int c)
{

		c = c % 10;

			if (c < 0)

						c = c * (-1);

				_putchar(c + '0');

					return (c);

}
