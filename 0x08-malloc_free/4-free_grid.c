#include "main.h"

/**
 * free_grid - main entry
 * @grid: int
 * @height: int given
 * Retrun: torr
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
