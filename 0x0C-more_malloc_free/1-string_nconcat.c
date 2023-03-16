#include "main.h"
#include <stdlib.h>
/**
 * strlen - returns lenght of a string
 * @str: input
 * Return: length
 */
int str_len(char *str)
{
	int i = 0;
	
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
/**
 * string_nconcat - concatenates two strings
 * @s1: string
 * @s2: string
 * @n: input
 * Return: pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	int i = 0;
	int k = 0;
	int l = 0;
	int p = n;

	if (s1 == NULL || s2 == NULL)
		return "";
	k = str_len(s1) + str_len(s2);

	s = malloc(sizeof(*s) * k + 1);
	if (s == NULL)
	{
		return (NULL);
	}
	while (i < str_len(s1))
	{
		s[i] = s1[i];
		i++;
	}
	while (l < p)
	{
		s[i] = s2[l];
		i++;
		l++;
	}
	s[k] = '\0';
	return (s);
}
