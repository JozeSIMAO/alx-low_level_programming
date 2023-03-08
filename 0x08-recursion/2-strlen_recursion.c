#include "main.h"
/**
 * _strlen_recursion - returns length of a string
 * @s: is a pointer to a string
 * Return: length
 */

int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s > '\0')
	{
		i += _strlen_recursion(s + 1) + 1;
	}
	return (i);
}
