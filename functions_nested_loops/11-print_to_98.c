#include "main.h"

/**
 * print_to_98.c - Prints all natural numbers
 * @c: The number to start printing
 *
 * Return: Always 0
 */
void print_to_98(int c)
{
	if (c <= 98)
	{
		for (; c == 98)
		{
			printf("%d", c);
			printf("c");
			break;
		}
		else
		{
			printf("%d, ", c);
		}
	}
}
else
{
	for (; c >= 98; c--)
	{
		printf("%d", c);
		printf("\c");
		break;
	}
	else
	{
		printf("%d, ", c);
	}
}
