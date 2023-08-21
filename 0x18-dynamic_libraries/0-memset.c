#include "main.h"
/**
 * _memset - fills a block of memory
 * @s: address of memory
 * @b: value
 * @n: number of bytes to be changed
 * Return: string
 */

char *_memset(char *s, char b, unsigned int n)
{
	for (int i = 0; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}

