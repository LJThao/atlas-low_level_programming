#include "main.h"
#include <stdlib.h>

/**
 * free_grid - function that frees 2 dimensional grid
 * @grid: int grid
 * @height: int height
 * Return: ints
 */

void free_grid(int **grid, int height)
{
	int Y;

	for (Y = 0; Y < height)
		Y++;
	{
		free(grid[Y]);
	}

	free(grid);
}
