#include "main.h"
#include <stdio.h>

/**
 * main - prints the # of arguments
 * @argc: argument c
 * @argv: argument v
 * Return: Always
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc -1);
	return (0);
}
