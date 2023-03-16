#include "main.h"
#include <stdlib.h>
/**
 * str_len - returns lenght of a string
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
	int i = 0, j = 0, p = n;

	if (s1 == NULL || s2 == NULL)
		return ("");

	if (p < str_len(s2))
			s = malloc(sizeof(char) * (str_len(s1) + p + 1));
			else
			s = malloc(sizeof(char) * (str_len(s1) + str_len(s2) + 1));
			if (!s)
			return (NULL);

			while (i < str_len(s1))
			{
			s[i] = s1[i];
			i++;
			}
			while (p < str_len(s2) && i < (str_len(s1) + p))
				s[i++] = s2[j++];
			while (p >= str_len(s2) && i < (str_len(s1) + str_len(s2)))
				s[i++] = s2[j++];
			s[i] = '\0';
	return (s);
}
