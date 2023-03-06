#include "main.h"
#include <stddef.h>
/**
 * _strchr - locates character string
 * @s: is pointer to string
 * @c: is character
 * Return: s
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return ((char *) s);
		}
		s++;
	}
	return (NULL);
}
