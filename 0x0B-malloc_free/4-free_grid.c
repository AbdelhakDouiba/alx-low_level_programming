#include "main.h"

/**
*free_grid - frees a 2 dimensional grid previously created by your
*		alloc_grid function.
*@grid: function parameter
*@height: function parameter
*/
void free_grid(int **grid, int height)
{
	int i = 0;

	if (grid != NULL && height > 0)
	{
		for (i; i < height; i++)
		{
			free(grid[i]);
		}
		free(grid);
	}
}
