#include <unistd.h>
/**
 * _putchar - returns a character
 * @c: is character
 * Return: c
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
