#include "main.h"

/**
 * puts_half - prints half of a string
 * @str : the string
 * Return : Always (0) success
 */

void puts_half(char *str)
{
	int i = 0;
	int n;
	int len = 0;

	while (str[len] != '\0')
	{
		len++;
	}
	if (len % 2 == 0)
	{
		for (i = len / 2; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
	}
	else if (len % 2)
	{
		for (n = (len - 1) / 2; i < len - 1; i++)
		{
			_putchar(str[n + 1]);
		}
	}
	_putchar('\n');
}
