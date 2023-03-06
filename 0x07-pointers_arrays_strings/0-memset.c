#include "main.h"
/**
 * _memset - fills memory with a constant variable
 * @s: is a pointer to an array
 * @b: is the constant
 * @n: is the number of times to fill memory
 * Return : s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
