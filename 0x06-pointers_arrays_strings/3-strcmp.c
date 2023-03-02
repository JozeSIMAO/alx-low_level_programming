#include "main.h"
/**
 * _strcmp - function compares two strings
 * @s1: first string
 * @s2: second string
 * Return : Always (0) success
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] == s2[i])
		{
			return (0);
		}
		else if ( s2[i] < s1[i])
		{
			return (1);
		}
		else if (s1[i] < s2[i])
		{
			return (-1);
		}
		i++;
	}
	return (0);
}
