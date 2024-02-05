#include "main.h"

/**
 * _strcmp - Write a function that compares two strings.
 * @s1: 1st string
 * @s2: 2nd string
 * Return: r value
 */

int _strcmp(char *s1, char *s2)
{
	int l = 0, j = 0, t = 0, r = 0, lim;

	while (s1[l])
	{
		l++;
	}

	while (s2[j])
	{
		j++;
	}

	if (l <= j)
	{
		lim = a;
	}
	else
	{
		lim = b;
	}

	while (t <= lim)
	{
		if (s1[t] == s2[t])
		{
			t++;
			continue;
		}
		else
		{
			r = s1[t] - s2[t];
			break;
		}

		t++;
	}
	return (r);
}
