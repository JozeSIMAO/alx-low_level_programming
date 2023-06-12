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
	int l = 0;

	if (s1 == NULL || s2 == NULL)
	{
		return (NULL);
	}
	else
	{
		while (s1[i] != '\0' && s2[j] != '\0')
		{
			i++;
			j++;
		}

		newStr = malloc(sizeof(*newStr) * (i + j + 1));

		if (newStr == NULL)
		{
			return (NULL);
		}

		while (k < i)
		{
			newStr[k] = s1[k];
			k++;
		}

		while (k < (i + j))
		{
			newStr[k] = s2[l];
			k++;
			l++;
		}

		newStr[k + 1] = '\0';
		return (newStr);
	}
}
