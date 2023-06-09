#include "main.h"
/**
 * _memcpy - copies memory
 * @dest: to copy to
 * @src: to copy from
 * @n: number of bytes
 * Return: new string
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	while(r < i)
	{
		dest[r] = src[r];
		n--;
		r++;
	}
	return (dest);
}
