#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a 2D array of integers
 * @width: array width
 * @height: array height
 * Return: NULL if width or height is 0 or negative
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **grid;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	grid = (int **)malloc(width * sizeof(int *));
	if (grid == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < width; i++)
	{
		grid[i] = (int *)malloc(height * sizeof(int));
		if (grid[i] == NULL)
		{
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}
	return (grid);
}

/**
 * free_grid - free the array grid
 * @grid: array
 * @width: width of array
 * Return: Nothing
 */
void free_grid(int **grid, int width)
{
	int i;

	if (grid == NULL)
	{
		return;
	}
	for (i = 0; i < width; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
