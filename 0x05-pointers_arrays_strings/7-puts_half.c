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

	while (str[i] != '\0')
	{
		i += 1;
		m = i / 2;
	}
	if ( i % 2 == 1)
		n += 1;
	while (str[n] != '\0')
	{
		_putchar(*(str + n));
		n++;
	}
	_putchar('\n');
}
