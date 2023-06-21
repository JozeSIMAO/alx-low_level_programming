#include "function_pointers.h"
/**
 * int_index - searches for an integer in an array
 * @size: number of elements in an array
 * @array: array to search in
 * @cmp: function pointer
 * Return: integer found
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array == NULL || cmp == NULL)
		exit(98);
	if (size <= 0)
		return (-1);

	while (i < size)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
		i++;
	}
	return (-1);
}
