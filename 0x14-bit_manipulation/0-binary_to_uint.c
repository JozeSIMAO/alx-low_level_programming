#include "main.h"

/**
 * _strlen - gets the length of a string
 * @str: is string
 * Return: length
 */

int _strlen(const char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}

	return (i);
}

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: is  a string pointer to a binary num
 * Return: unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
	int i = _strlen(b);
	unsigned int baseVal = 1;
	unsigned int total = 0;

	if (b == NULL)
	{
		return (0);
	}

	for (i = i - 1; i >= 0 && b[i] != '\0'; i--)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
		else if (b[i] == '1')
		{
			total += baseVal;
		}
		baseVal *= 2;
	}

	return (total);
}
