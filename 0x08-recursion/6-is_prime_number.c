#include "main.h"

/**
 * check_prime - checks if a number is a prime number
 * @n: is number
 * @val: value to maintain
 * Return: 1 or 0
 */

int check_prime(int n, int val)
{
	if (val == 1)
	{
		return (1);
	}
	if (n % val == 0 && val > 0)
	{
		return (0);
	}
	return (check_prime(n, val - 1));
}

/**
 * is_prime_number - checks for prime numbers
 * @n: is the number to check for
 * Return: 1 otherwise 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (check_prime(n, n - 1));
}
