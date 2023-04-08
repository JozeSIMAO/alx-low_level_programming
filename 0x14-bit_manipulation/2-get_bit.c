#include "main.h"
/**
 * get_bit - returns the value of a bit at a given index
 * @n: value of decimal
 * @index: index of bit
 * Return: index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int *binary = malloc(sizeof(binary) * 32);
	int indx = 0;

	if (binary == NULL)
		return (-1);
	if (index >= sizeof(binary) * 8)
	{
		return (-1);
	}

	while (n > 0)
	{
		binary[indx] = n % 2;
		n /= 2;
		indx++;
	}

	return (binary[index]);
}
