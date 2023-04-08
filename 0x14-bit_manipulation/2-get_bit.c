#include "main.h"
/**
 * get_bit - returns the value of a bit at a given index
 * @n: value of decimal
 * @index: index of bit
 * Return: index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int *binary = malloc(sizeof(unsigned int) * 32);
	int indx = 0, result;

	if (binary == NULL)
		return (-1);
	if (index >= 32)
	{
		free(binary);
		return (-1);
	}

	while (n > 0)
	{
		binary[indx] = n % 2;
		n /= 2;
		indx++;
	}

	result = binary[index];
	free(binary);

	return (result);
}
