#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - allocates a grid and frees space
 * @grid: takes width of grid
 * @height: height of grid
 * Return: free grid
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
