#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - function that returns a points to arrays
 * @width: int width
 * @height: int height
 * Return: ints
 */

int **alloc_grid(int width, int height)
{
	int Y, F, T, O;
	int **A;

	if (width <= 0)
	if (height <= 0)
		return (NULL);

	A = malloc(sizeof(int *) * height);

	if (A == NULL)
	{
		free(A);
		return (NULL);
	}

	for (Y = 0; Y < height, Y++)
	{
		A[Y] = malloc(sizeof(int) * width);

		if (A[Y] == NULL)
		{
			for (F = Y; F >= 0; F--)
			{
				free(A[F]);
			}

			free(A);
			return (NULL);
		}
	}

	for (T = 0; T < height; T++)
	{
		for (O = 0; O < width; O++)
		{
			A[T][O] = 0;
		}
	}
	return (A);
}
