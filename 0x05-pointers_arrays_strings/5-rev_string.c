#include "main.h"

/**
 * rev_string - reverses a string
 * @s : is the string
 * Return : Always (0) success
 */

void rev_string(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	while (i--)
	{
		_putchar(s[i]);
	}
}
