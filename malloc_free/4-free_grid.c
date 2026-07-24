#include "main.h"
#include <stdlib.h>

/**
 * free_grid - function that frees a 2d grid
 * @grid: the grid filled with numbers
 * @height: the columns
 *
 * Return: nothing
 */

void free_grid(int **grid, int height)
{
	if (grid == NULL || height <= 0)
		return;

	while (height > 0)
	{
		height--;
		free(grid[height]);
	}

	free(grid);
}
