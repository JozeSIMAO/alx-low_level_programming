#include "function_pointers.h"
/**
 * op_add - returns sum of a and b
 * @a: input
 * @b: input
 * Return: int
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - returns difference  of a and b
 * @a: input
 * @b: input
 * Return: int
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - returns product of a and b
 * @a: input
 * @b: input
 * Return: int
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - returns division of a and b
 * @a: input
 * @b:input
 * Return: int
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - returns the remainder of the division of a
 * and b
 * @a: input
 * @b: input
 * Return: int
 */

int op_mod(int a, int b)
{
	return (a % b);
}
