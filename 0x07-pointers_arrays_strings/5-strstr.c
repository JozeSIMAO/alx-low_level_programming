#include "main.h"
/**
 * _strstr - finds a needle in a haystack
 * @haystack: is a pointer to a string
 * @needle: input
 * Return: Always (0) success
 */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		if (*haystack == *needle)
		{
			return (haystack);
		}
		haystack++;
	}
	return ('\0');
}
