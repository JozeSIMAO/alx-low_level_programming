#include "main.h"
/**
 * free_grid - frees memory allocated to a grid
 * @grid: grid
 * @height: height of grid
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	if (grid == NULL || height == 0)
		return;

	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}
