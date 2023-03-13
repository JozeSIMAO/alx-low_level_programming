#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars and initializes it a specific char
 * @size: input
 * @c: input
 * Return: pointer to array
 */

char *create_array(unsigned int size, char c)
{
	int i = 0;
	int j = size;
	char *arr;

	if (j <= 0)
	{
		return (NULL);
	}
	else if (j > 0)
	{
		arr = malloc(sizeof(*arr) * j);

		while (i < j)
		{
			arr[i] = c;
			i++;
		}
		return (arr);
	}
	else
		return (NULL);
}
