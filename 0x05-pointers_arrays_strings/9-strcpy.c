#include "main.h"

/**
 * _strcpy - Function that copies the string
 * @dest : pointer to destination char
 * @src: pointer to source char
 * Return : Always (0) success
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		*(dest + i) = *(src + i);
	}
	*(dest + i) = '\0';
	return (dest);
}
