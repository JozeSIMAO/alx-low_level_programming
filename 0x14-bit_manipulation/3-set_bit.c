#include "main.h"
/**
 * set_bit - sets the value of a bit at a given index to 1
 * @n: is pointer to an unsigned long int
 * @index: is index
 * Return: 1 or -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 32)
	{
		return (-1);
	}

	*n = (*n | (1  << index));

	return (1);
}
