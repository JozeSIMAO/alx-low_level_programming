#include "3-calc.h"
#include <stdio.h>

/**
 * op_add - adds two ints
 * @a: input
 * @b: input
 * Return: result of a + b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts an int from an int
 * @a: input
 * @b: input
 * Return: result of a - b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies a and b
 * @a: input
 * @b: input
 * Return: a * b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides two numbers
 * @a: input
 * @b: intput
 * Return: a / b
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - returns remainder of a division of a by b
 * @a: input
 * @b: input
 * Return: a % b
 */

int op_mod(int a, int b)
{
	return (a % b);
}
