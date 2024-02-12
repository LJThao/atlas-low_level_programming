#include "main.h"
#include <unistd.h>

/**
 * _putchar - my putchar.c
 * @c: c character
 */

int _putchar(char c)
{
	return write(STDOUT_FILENO, &c, 1);
}
