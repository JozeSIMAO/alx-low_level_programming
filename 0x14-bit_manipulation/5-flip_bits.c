#include "main.h"
/**
 * flip_bits - finds number of bits you would need to flip to get
 * from one number to another.
 * @n: first number
 * @m: second number
 * Return: number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int bits;
	unsigned long int difference = n ^ m;

	for (bits = 0; difference != 0; bits++)
	{
		difference &= difference - 1;
	}

	return (bits);
}
