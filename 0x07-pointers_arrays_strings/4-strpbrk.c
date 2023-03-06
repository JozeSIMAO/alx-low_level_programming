#include "main.h"
/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: is a pointer to a string
 * @accept: is a pointer to a string
 * Return: Always (0) success
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return ('\0');
}
