#include "main.h"
#include <stdlib.h>

/**
 * free_grid - it frees a 2 dimensional grid previously created
 * @grid: array
 * @height: parameter
 * Return: result
 */

void free_grid(int **grid, int height)
{
	int k;

	if (grid == NULL || height <= 0)
		return;

	for (k = 0; k < height; k++)
		free(grid[k]);
	free(grid);
}
