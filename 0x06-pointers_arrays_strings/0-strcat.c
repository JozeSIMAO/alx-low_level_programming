#include "main.h"

/**
 * *_strcat - concatenates two strings
 * @dest : first string
 * @src : 2nd string
 * Return : Always (0) success
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int len = 0;

	for (i = 0; dest[i] != '\0'; i++) /*to get to the end of def*/
	{
		len++;
	}
	for (i = 0; src[i] != '\0'; i++) /*concatenate src at the end of def*/
	{
		dest[len + i] = src[i];
	}
	dest[len + i] = '\0';
	return (dest);
}
