#include "main.h"
/**
 * _strdup - returns a pointer to a new allocated space in
 * memory, which contains a copy of the string given
 * as a parameter
 * @str: string
 * Return: a pointer to the new string
 */

char *_strdup(char *str)
{
	char *newStr;
	int i = 0;
	int j = 0;

	if (str == NULL)
		return (NULL);
	else
	{
		while (str[i] != '\0')
		{
			i++;
		}
		newStr = malloc(sizeof(newStr) * (i + 1));

		if (newStr == 0)
		{
			return (NULL);
		}
		while (j < i)
		{
			newStr[j] = s[j];
			j++;
		}
	}
	newStr[i] = '\0';

	return (newStr);
}
