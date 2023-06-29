#include "main.h"

/**
 * _putchar - writes a characater to stdout
 * @c: character to print
 *
 * Return: number of chars printed
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
