#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - prints numbers followed by a new line
 * @separator: string to be printed between numbers
 * @n: the number of integers passed to function
 * Return: numbers
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list ap;

	if (separator == NULL)
	{
		return;
	}

	va_start(ap, n);

	/*Printing the numbers*/

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, int));
		printf("%s ", separator);
	}
	va_end(ap);

	printf("\n");
}