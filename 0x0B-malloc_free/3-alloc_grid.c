#include "main.h"
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: width of 2d array
 * @height: height 2d array
 * Return: pointer
 */
int **alloc_grid(int width, int height)
{
	int **newGrid;
	int i, j;

	if (width <= 0)
		return (NULL);
	if (height <= 0)
		return (NULL);

	newGrid = malloc(sizeof(**newGrid) * height);

	if (newGrid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		newGrid[i] = malloc(sizeof(int) * width);

		if (newGrid[i] == NULL)
		{
			free(newGrid);
			for (j = 0; j <= i; j++)
				free(newGrid[j]);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			newGrid[i][j] = 0;
		}
	}
	return (newGrid);
}
