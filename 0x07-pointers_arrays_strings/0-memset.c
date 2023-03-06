#include "main.h"
/**
 * _memset - fills memory
 * @s: pointer to an array
 * @b: constant byte
 * @n: first n bytes
 *
 * Return: *s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;
	int m = n;

	while (i < m)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
