#include "main.h"

/**
 * _strstr - Write a function that locates a substring.
 * @haystack: string haystack
 * @needle: substring needle
 * Return: Always 0
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *lj = haystack;
		char *th = needle;

		while (*lj == *th && *th != '\0')
		{
		lj++;
		th++;
		}
		if (*th == '\0')
			return (haystack);
	}
	return (0);
}
