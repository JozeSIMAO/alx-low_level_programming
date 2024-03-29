#include "main.h"
/**
 * get_bit - returns the value of a bit at a given index
 * @n: value of decimal
 * @index: index of bit
 * Return: index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int result;

	if (index >= sizeof(unsigned int) * 8)
	{
		return (-1);
	}

	result = (n >> index) & 1;

	return (result);
}
