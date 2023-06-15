#include "main.h"
/**
 * str_len - returns a length of a string
 * @str: is pointer to string
 * Return: length
 */
unsigned int str_len(char *str)
{
	unsigned int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of words to copy
 * Return: pointer to new string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len = str_len(s1) + str_len(s2), i = 0, j = 0;
	char *str;
	unsigned int len2 = str_len(s2);

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	str = malloc(sizeof(*str) * (len + 1));

	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		if (n < str_len(s2))
		{
			while (i < str_len(s1))
			{
				str[i] = s1[i];
				i++;
			}
			while (n > j)
			{
				str[i] = s2[j];
				i++;
				j++;
			}
		}
		else if (n >= str_len(s2))
		{
			while (i < str_len(s1))
			{
				str[i] = s1[i];
				i++;
			}
			while (len2 == str_len(s2))
			{
				str[i] = s2[j];
				i++;
				j++;
				len2--;
			}
		}
	}
	str[i] = '\0';
	return (str);
}
