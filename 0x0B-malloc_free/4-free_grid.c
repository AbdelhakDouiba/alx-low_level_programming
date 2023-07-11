#include "main.h"

/**
*free_grid - frees a 2 dimensional grid previously created by your
*		alloc_grid function.
*@grid: function parameter
*@height: function parameter
*/
void free_grid(int **grid, int height)
{
		for (; height >= 0 ; height--)
		{
			free(grid[height]);
		}
		free(grid);
}
