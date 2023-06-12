#include "main.h"
/**
 * create_array - creates an array of chars
 * @size: size of array
 * @c: char
 * Return: 0
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i = size;
	unsigned int j = 0;
	char *arr;

	if (size <= 0)
		return (NULL);

	arr = malloc(sizeof(char) * i);

	while (j < i)
	{
		arr[j] = c;
		j++;
	}

	return (arr);
}
