#include <unistd.h>

/**
 * _putchar - returns a character
 * @c: is character to return
 * Return: c
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
