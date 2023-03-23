#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all -prints anything
 * @format: list of arguments
 * Return: anything
 */

void print_all(const char * const format, ...)
{
	va_list ap;
	unsigned int i = 0, j = 0, c;
	char *string, *separator = "";
	const char t_arg[] = "cifs";

	va_start(ap, format);
	while (format && format[i])
	{
		while (t_arg[j])
		{
			if (format[i] == t_arg[j] && c)
			{
				printf(", ");
				break;
			} j++;
		}
		switch (format[i])
		{
			case 'c':
				printf("%s%c", separator, va_arg(ap, int)), c = 1;
				break;
			case 'i':
				printf("%s%d", separator, va_arg(ap, int)), c = 1;
				break;
			case 'f':
				printf("%s%f", separator, va_arg(ap, double)), c = 1;
				break;
			case 's':
				string = va_arg(ap, char *), c = 1;
				if (!string)
				{
					printf("(nil)");
					break;
				}
				printf("%s", string);
				break;
		} separator = ", ";
		i++;
	}
	printf("\n"), va_end(ap);
}
