#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid -returns a pointer to a 2 dimensional array
 * @width: parameter
 * @height: parameter
 * Return: result
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int k, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	grid = malloc(sizeof(int *) * height);

	if (grid == NULL)
		return (NULL);
	for (k = 0; k < height; k++)
	{
		grid[k] = malloc(sizeof(int) * width);

		if (grid[k] == NULL)
		{
			for (j = 0; j < k; j++)
				free(grid[j]);
			free(grid);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			grid[k][j] = 0;
	}
	return (grid);
}
