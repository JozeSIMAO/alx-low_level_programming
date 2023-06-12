#include "main.h"
/**
 * str_len - gets the length of a string
 * @str: is string
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
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: s2nd string
 * Return: pointer to new string
 */
char *str_concat(char *s1, char *s2)
{
	char *newStr;
	int i = 0, k = 0;
	int len = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len = str_len(s1) + str_len(s2);
	newStr = malloc(sizeof(*newStr) * (len + 1));

	if (newStr == 0)
	{
		return (NULL);
	}
	else
	{
		while (k < str_len(s1))
		{
			newStr[k] = s1[k];
			k++;
		}
		while (i < str_len(s2))
		{
			newStr[k] = s2[i];
			i++;
			k++;
		}
		newStr[k] = '\0';
		return (newStr);
	}
}
