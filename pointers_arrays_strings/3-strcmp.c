#include "main.h"

/**
 * _strcmp - Write a function that compares two strings.
 * @s1: 1st string
 * @s2: 2nd string
 * Return: int h value
 */

int _strcmp(char *s1, char *s2)
{
	int l = 0, j = 0, t = 0, h = 0, lim;

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
		lim = l;
	}
	else
	{
		lim = j;
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
			h = s1[t] - s2[t];
			break;
		}

		t++;
	}
	return (h);
}
