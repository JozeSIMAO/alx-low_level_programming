#include "main.h"
#include <stdbool.h>
/**
 * _strspn - gets length of a prefix substring
 * @s: pointer to string
 * @accept: pointer to string
 * Return: Always (0) success
 */

unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int j = 0;
	int len1 = 0;
	int len2 = 0;
	int initial_length = 0;

	while (s[len1] != '\0')
	{
		len1++;
	}
	while (accept[len2] != '\0')
	{
		len2++;
	}
	for (i = 0; i < len1; i++)
	{
		bool found_match = false;

		for (j = 0; j < len2; j++);
			if (accept[j] == s[i])
			{
				found_match = true;
				break;
			}
			if (!found_match)
				break;
			else
			{
				initial_length++;
			}
	}
	return (initial_length);
}
