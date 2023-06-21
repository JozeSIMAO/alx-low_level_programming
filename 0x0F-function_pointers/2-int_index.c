#include "function_pointers.h"
/**
 * int_index - searches for an integer in an array
 * @size: number of elements in an array
 * @array: array to search in
 * @cmp: function pointer
 * Return: index of integer found
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
			{
				return (i);
			}
		}
	}
	return (-1);
}
