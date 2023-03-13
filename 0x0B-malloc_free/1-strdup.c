#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a new string which is a duplicate of str
 * @str: string input
 * Return: pointer to new string
 */

char *_strdup(char *str)
{
	int i = 0;
	int j = 0;
	char *s;

	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		while  (str[i] != '\0')
		{
			i++;
		}

		s = malloc(sizeof(*s) * i);

		if (s < i)
		{
			return (NULL);
		}

		while (j < i)
		{
			s[j] = str[j];
			j++;
		}
		s[j] = '\0';
		return (s);
	}
}
