#include "main.h"
/**
 * _memcpy - copies memory
 * @dest: pointer to a char to cpy to
 * @src: pointer to a char to cpy from
 * @n: first n bytes
 *
 * Return: *dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;
	int m = n;

	while (i < m)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
