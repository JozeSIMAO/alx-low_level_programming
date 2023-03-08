#include "main.h"
/**
 * square - find square root
 * @n: int to find square root
 * @val: square root
 * Return: int
 */
int square(int n, int val)
{
	if (val * val == n)
	{
		return (val);
	}
	else if (val * val < n)
	{
		return (square(n, val + 1));
	}
	else
	{
		return (-1);
	}
}

/**
 * _sqrt_recursion - returns natural square root a numb
 * @n: input
 * Return: int n
 */

int _sqrt_recursion(int n)
{
	return (square(n, 1));
}
