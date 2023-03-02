#include "main.h"
/**
 * reverse_array - reverses an array
 * @a: input
 * @n: input
 *
 * Return: Always (0) success
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int j;

	while (i < n--)
	{
		j = a[i];
		a[i] = a[n];
		a[n] = j;
		i++;
	}
}
