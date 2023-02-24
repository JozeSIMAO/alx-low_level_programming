#include "main.h"

/**
 * print_square - prints a square
 * @size: is the size of the square
 * Return: Always (0) success
 */

void print_square(int size)
{
int i;
int j;
if (size <= 0)
_putchar('\n');
else
{
for (i = 0; i <= size; i++)
{
for (j = 0; j < i; j++)
{
_putchar('#');
}
_putchar('\n');
}
}
}
