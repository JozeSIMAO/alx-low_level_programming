#include "main.h"
/**
 * print_binary - prints the binary representation of a number
 * @n: unsinged int of number
 * Return: binary
 */

void print_binary(unsigned long int n)
{
	if (n > 1) /*checks if n is greater than 1*/
	{
		print_binary(n >> 1);
	}
	_putchar((n & 1) ? '1' : '0');
}

/*
 * function first checks if n is greater than 1
 * if it is, it will then call on itself recursively and shift n by one
 * bit to the right, this will divide n by 2
 * the recursion continues until n is either 0 or 1.
 * the function starts printing the binary representation of n
 * by printing the least significant bit.
 * the using the & operatore, we print the lSB by using  1 (00000001)
 * this will check if the LSB of n is either 1 or 0
 * if it is 1, it'll print 1
 * if it is 0, it'll print 0
 * after printing the LSB, the function returns to the previous recursive
 * call and printings the next bit. Until all n bits have been printed
 * Most significant to least significant.
 */
