#include <unistd.h>
/**
 * _putchar - prints c to the stdout
 * @c: character to print
 * Return: int
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
