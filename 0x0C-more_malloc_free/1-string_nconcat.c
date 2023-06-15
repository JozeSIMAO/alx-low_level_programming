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
	unsigned int len1 = str_len(s1), i = 0, j = 0;
	char *str;
	unsigned int len2 = str_len(s2);

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	if (n < len2)
	{
		str = malloc(sizeof(char) * (len1 + n + 1));
	}
	else
	{
		str = malloc(sizeof(char) * (len1 + len2 + 1));
	}
	if (str == NULL)
		return (NULL);
	while (i < len1 && i < n)
	{
		str[i] = s1[i];
		i++;
	}
	while (n < len2 && i < (len1 + n))
		str[i++] = s2[j++];
	while (n >= len2 && i < (len1 + len2))
		str[i++] = s2[j++];
	str[i] = '\0';
	return (str);
}
