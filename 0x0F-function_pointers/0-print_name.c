#include "main.h"

/**
 * print_name - prints name
 * @name: is namae
 * @f: pointer to a function
 * Return: name
 */

void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
