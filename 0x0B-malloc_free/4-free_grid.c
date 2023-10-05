#include "main.h"
#include <stdlib.h>

/**
 * free_grid - free memory allocated for a grid
 * @grid: pointer to grid
 * @height: height of grid
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid != NULL && height > 0)
	{
		for (i = 0; i < height; i++)
		{
			if (grid[i] != NULL)
				free(grid[i]);
		}
		free(grid);
	}
}
