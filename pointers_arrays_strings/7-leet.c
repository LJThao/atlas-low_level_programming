#include "main.h"

/**
 * leet - encodes a string into 1337.
 * @m: string
 * Return: The m string
 */

char *leet(char *m)
{
	int l = 0, j = 0, t = 5;
	char r[5] = {'A', 'E', 'O', 'T', 'L'};
	char n[5] = {'4', '3', '0', '7', '1'};

	while (m[l])
	{
		j = 0;
		
		while (j < t)
		{
			if (m[l] == r[j] || m[l] - 32 == r[j])
			{
				m[l] = n[j];
			}
			j++;
		}
		l++;
	}
	return (m);
}
