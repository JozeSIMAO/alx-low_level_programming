#include "main.h"
/**
 * _memset - fills memory with a byte
 * @str: string
 * @c: constant byte
 * @n: input
 * Return: pointer to memory
 */
char *_memset(char *str, char c, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		str[i] = c;
		i++;
	}
	return (str);
}
/**
 * _calloc - allocates memory for an array using malloc
 * @nmemb: number of elements
 * @size: size of  elementents
 * Return: void
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *array;

	if (nmemb == 0 || size == 0)
		return (NULL);

	array = malloc(nmemb * size);

	if (array == NULL)
	{
		return (NULL);
	}

	_memset(array, 0, nmemb * size);
	return (array);
}
