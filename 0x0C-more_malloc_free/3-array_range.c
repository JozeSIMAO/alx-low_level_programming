#include "main.h"
/**
 * array_range - creates an array of integers
 * @min - min value
 * @max - max value
 * Return: pointer to array
 */
int *array_range(int min, int max)
{
	int *array;
	int size = 0, i = 0;

	if (min > max)
		return (NULL);
	size = max - min + 1;

	array = malloc(sizeof(*array) * size);

	if (array == NULL)
	{
		return (NULL);
	}
	while (min <= max)
	{
		array[i++] = min;
		min++;
	}
	return (array);
}
