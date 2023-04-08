#include "main.h"
/**
 * get_bit - returns the value of a bit at a given index
 * @n: value of decimal
 * @index: index of bit
 * Return: index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int *binary = malloc(sizeof(int) * 32);
	int indx = 0;

	if (binary == NULL)
		return (-1);

	while (n > 0)
	{
		binary[indx] = n % 2;
		n /= 2;
		indx++;
	}

	return (binary[index]);
}
