#include "main.h"

/**
 * puts2 - prints every other character in a string
 * @str : is the string
 * Return : Always (0) success
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] != '\0')
		{
			if (i % 2 == 0)
			{
				_putchar(str[i]);
			}
		}
		i++;
	}
}
