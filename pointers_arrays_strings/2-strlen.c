#include <stdio.h>

/**
 * _strlen - returns the length of a string
 * @str: string of length
 * Return: length of string
 */

size_t _strlen(const char *str)
{
	size_t length = 0;

	while (*str++)
	length++;
	return (length);
}
