#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: input
 * Return: void
 */

void *malloc_checked(unsigned int b)
{
	int *a;
	a = malloc(b);

	if (a == NULL)
	{
		exit(98);
	}
	return (a);
}
