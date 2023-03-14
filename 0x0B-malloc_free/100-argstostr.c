#include "main.h"
#include <stdlib.h>
/**
 * argstostr - concatenates all arguments
 * @ac: number of arguments
 * @av: array of arguments
 * Return: s
 */
char *argstostr(int ac, char **av)
{
	int i, j, k, len;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			len++;
	}
	len += ac;

	str = (char *) malloc(sizeof(char) * (len + 1));

	if (str == NULL)
		return (NULL);

	k = 0;

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			str[k] = av[i][j];
			k++;
		}
		if (str[k] == '\0')
		{
		str[k++] = '\n';
		}
	}
	return (str);
}
