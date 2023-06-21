#include "function_pointers.h"
/**
 * array_iterator - executes a function given as a parameter on each
 * element of an array
 * @array: the array
 * @size: size of the array
 * @action: is pointer to function to use
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;
	int j = 0;

	if (array == NULL || !size)
		exit(98);
	if (action == NULL)
		exit(98);

	while (i < size)
	{
		action(array[j++]);
		i++;
	}
}
