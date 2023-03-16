#include "main.h"
#include <stdlib.h>
/**
 * malloc_Checked - allocates memory
 * @b: input
 * Return: pointer
 */

void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
