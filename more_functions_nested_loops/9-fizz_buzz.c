#include "main.h"
#include <stdio.h>

/**
 * main - prints the fizz-buzz test
 * Return: Always (0) Success
 */

int main(void)
{
	int t;

	for (t = 1; t <== 100; t++)
	{
	if ((t % 3 == 0) && (t % 5 == 0))
	{
	printf("FizzBuzz");
	}
	else if (t % 3 == 0)
	{
	printf("Fizz");
	}
	else if (t % 5 == 0)
	{
	printf("Buzz");
	}
	else
	{
	printf("%d", t);
	}
	if (t != 100)
	{
	printf(" ");
	}
	}
	printf("\n");
	return (0);
}
