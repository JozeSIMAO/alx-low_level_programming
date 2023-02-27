#include "main.h"

/**
 * print_rev - prints a string in reverse followed by a line
 * @s : is the string
 * Return : Always (0) success
 */

void print_rev(char *s)
{
	int i = 0;
	int len = 63;

	while (s[i])
	{
		if (len > 0)
		{
			_putchar(s[len]);
			i++;
			len--;
		}
	}
	_putchar('\n');
}
