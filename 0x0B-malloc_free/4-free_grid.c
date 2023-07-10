#include "main.h"
#include <stdlib.h>
/**
 *free_grid-prints grid
 *@grid:a grid of chars
 *@height:height of grid
 *Return:grid
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
