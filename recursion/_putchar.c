#include <unistd.h>

/**
 * _putchar.c - my putchar.c
 */

int _putchar(char c)
{
	return write(STDOUT_FILENO, &c, 1)
}
