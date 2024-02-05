#include "main.h"

/**
 * print_chessboard - Write a function that prints the chessboard.
 * @a: a string
 * Return: Always 0
 */

void print_chessboard(char (*a)[8]);
{
	int l, j;

	for (l = 0; l < 8; l++)
	{
		for (j = 0; j < 8; j++)
			_putchar(a[l][j]);
		_puthar('\n');
	}
}
