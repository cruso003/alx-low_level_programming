#include "main.h"
#include <stdlib.h>
/**
 * free_grid - frees 2D dimensional grid
 * @grid: 2D array
 * @height: height of array
 * Return: Nothing
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
	{
		return;
	}
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
