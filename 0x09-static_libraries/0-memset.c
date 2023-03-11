#include "main.h"
/**
 * _memset - fills a block of memory
 * @s: address of memory
 * @b: value
 * @n: number of bytes to be changed
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i  = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
