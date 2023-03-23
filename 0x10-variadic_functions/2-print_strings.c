#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - prints a string followed by a new line
 * @separator: pointer to a char
 * @n: number of strings in the function
 * Return: strings
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	char *string;
	va_list ap;

	va_start(ap, n);

	/*Printing the strings*/

	for (i = 0; i < n; i++)
	{
		string = va_arg(ap, char *);

		if (!string)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", string);
		}

		if (i < (n - 1))
		{
			if (separator)
				printf("%s", separator);
		}
	}
	va_end(ap);

	printf("\n");
}
