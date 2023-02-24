#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: is the size of the triangle
 * Return: Always (0) success
 */

void print_triangle(int size)
{
int rowno;
int space;
int symbol;
if (size <= 0)
_putchar('\n');
else
{
for (rowno = 1; rowno <= size; rowno++)
{
for (space = 1; space <= size - rowno ; space++)
{
_putchar(' ');
}
for (symbol = 1; symbol <= rowno; symbol++)
{
_putchar('#');
}
_putchar('\n');
}
}
}
