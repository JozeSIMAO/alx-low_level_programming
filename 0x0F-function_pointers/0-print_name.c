#include "function_pointers.h"
/**
 * print_name - prints a name
 * @name: the name
 * @f: function pointer
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL)
		exit(98);
	f(name);
}
