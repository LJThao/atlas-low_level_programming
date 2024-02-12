#include "main.h"
#include <unistd.h>

/**
 * _putchar - my putchar.c
 * @c: c character
 */

int _putchar(char c)
{
	write(1, &c, 1);
}
