#include "main.h"
/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: s2nd string
 * Return: pointer to new string
 */

char *str_concat(char *s1, char *s2)
{
	char *newStr;
	int i = 0, j = 0, k = 0;
	int len = 0, p = 0;

	if (s1 == NULL || s2 == NULL)
	{
		return (NULL);
	}
	else
	{
		while (s1[i] != '\0')
		{
			i++;
		}
		while (s2[j] != '\0')
		{
			j++;
		}
		len = i + j;

		newStr = malloc(sizeof(*newStr) * (len + 1));

		if (newStr == NULL)
		{
			return (NULL);
		}
		while (k < i)
		{
			newStr[k] = s1[k];
			k++;
		}
		while (k < len)
		{
			newStr[k] = s2[p];
			k++;
			p++;
		}
		newStr[k + 1] = '\0';
		return (newStr);
	}
}
