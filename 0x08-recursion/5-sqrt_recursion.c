#include "main.h"
/**
 * square - squares
 * @n: input
 * @val: input
 * Return: Always (0) success
 */

int square(int n, int val)
{
        if (val * val == n)
                return (val);
        else if (val * val < n)
                return (square(n, val + 1));
        else
                return (-1);
}


/**
 * int _sqrt_recursion - returns natural square root a numb
 * @n: is an input
 * Return: Always (0) success
 */

int _sqrt_recursion(int n)
{
	return (square(n, 1));
}
