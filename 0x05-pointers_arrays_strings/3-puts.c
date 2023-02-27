#include "main.h"

/**
 * _puts - prints a string followed by a new line
 * @str : is the string
 * Return : Always (0) success
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] != '\0')
		{
			_putchar(str[i]);
		}
		i++;
	}
	_putchar('\n');
}
