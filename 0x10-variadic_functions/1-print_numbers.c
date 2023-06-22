#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: separates the numbers
 * @n: number of parameters passed
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list_t;
	unsigned int i = 0;

	va_start(list_t, n);

	while (i < n)
	{
		printf("%d", va_arg(list_t, int));

		if (i != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
		i++;
	}
	printf("\n");
	va_end(list_t);
}
