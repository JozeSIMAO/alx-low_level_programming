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
	int i = 0;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
