#include "main.h"

/**
 * swap_int - swaps given integers
 * @a: is to be swapped
 * @b: is to be swapped
 * Return: Always (0) success
 */

void swap_int(int *a, int *b)
{
int temp = *a;
*a = *b;
*b = temp;
}
