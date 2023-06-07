#include "main.h"

/**
 * find_square - returns the square root of a num
 * @n: is number
 * @root: is square root
 * Return: squared answer
 */

int find_square(int n, int root)
{
	if (root * root == n)
		return (root);
	else if (root * root < n)
	{
		return (find_square(n, root + 1));
	}
	else
	{
		return (-1);
	}
}
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: is the number
 * Return: natural square root of number or -1
 */

int _sqrt_recursion(int n)
{
	return (find_square(n, 1));
}
