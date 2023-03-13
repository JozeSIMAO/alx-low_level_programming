#include "main.h"
#include <stdlib.h>
/**
 * free_grid - frees memory allocated to grid
 * @grid: grid
 * @height: of grid
 * Return: Always (0) success
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid  == NULL || height == 0)
		return;
	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
