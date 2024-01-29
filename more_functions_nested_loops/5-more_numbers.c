#include "main.h"


/**
 * more_numbers - prints 10 times 0 to 14
 * Return: 10 times by the numbers of 0 to 14
 */

void more_numbers(void)
{
	int l, j;

	for (l = 0; l < 10; l++)
	{
	for (j = 0; j <= 14; j++)
	{
	if (j > 9)
	{
	_putchar((j / 10) + '0');
	}
	_putchar((j % 10) + '0');
	}
	_putchar('\n');
	}
}	
