#include "main.h"

/**
 * _strlen - prints the length of a string
 * @s: is the string
 * Return: Always (0) success
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		s++;
		len++;
	}
	return (len);
}
