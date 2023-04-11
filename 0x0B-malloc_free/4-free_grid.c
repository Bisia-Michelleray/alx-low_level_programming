#include "main.h"

/**
 * free_grid - frees a 2 dimensional grid
 * @grid: input one
 * @height: input two
 * Return: always 0 (success)
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
