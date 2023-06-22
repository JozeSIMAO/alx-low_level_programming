#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_strings - prints strings, followed by a new line
 * @separator: string to be printed between string
 * @n: number of parameters
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	char *str;
	va_list list_t;

	va_start(list_t, n);

	while (i < n)
	{
		str = va_arg(list_t, char *);

		printf("%s", str);

		if (str == NULL)
		{
			printf("(nil)");
		}
		if (i != (n - 1))
		{
			if (separator)
				printf("%s", separator);
		}
		i++;
	}
	printf("\n");

	va_end(list_t);
}
