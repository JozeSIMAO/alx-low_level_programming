#include <unistd.h>

/**
 * _putchar - prints the character c to stdout
 * @c: is the character to be printed
 * Return: 1 on succession
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
