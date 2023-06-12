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

	if (str == NULL)
	{
		return (NULL);
	}
	newStr = malloc(sizeof(str));

	if (newStr == 0)
	{
		return (NULL);
	}

	while (str[i] != '\0')
	{
		newStr[i] = str[i];
		i++;
	}
	newStr[i] = '\0';

	return (newStr);
}
