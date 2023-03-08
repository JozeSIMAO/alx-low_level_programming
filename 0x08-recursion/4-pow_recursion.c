#include "main.h"
/**
 * _pow_recursion - returns value of x to the power of y
 * @x: input
 * @y: input
 * Return: x
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 1)
	{
		return (x);
	}
	else if (y == 1)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
