#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 * @s1: string
 * @s2: string
 * Return: s
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0, int j = 0, int k = 0, int l = 0, int m = 0, char *s;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[j] != '\0')
	{
		j++;
	}
	k = i + j;
	s = malloc(sizeof(*s) * (k + 1));
	if (s == 0)
	{
		return (NULL);
	}
	else
	{
		while (m < i)
		{
			s[m] = s1[m];
			m++;
		}
		while (l < j)
		{
			s[m] = s2[l];
			l++;
			m++;
		}
	}
	s[k] = '\0';
	return (s);
}
