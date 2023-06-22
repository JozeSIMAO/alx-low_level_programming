#include "variadic_functions.h"
/**
 * sum_them_all - sums all the parameters
 * @n: num of parameters
 * Return: int sum
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i = 0;
	va_list list_t;

	va_start(list_t, n);

	for (; i < n; i++)
	{
		sum = va_arg(list_t, int) + sum;
	}

	va_end(list_t);
	return (sum);
}
