#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints number of coins to make change
 * @argc: number of commandline arguments
 * @argv: array of commandline arguments
 * Return: 0
 */

int main(int argc, char **argv)
{
	int total, count, i;
	int cents[] = {25, 10, 5, 2, 1};
	int numCoins = sizeof(cents) / sizeof(cents[0]);
	char *t;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	total = strtol(argv[1], &t, 10);

	if (*t != '\0')
	{
		printf("Error\n");
		return (1);
	}
	if (total < 0)
	{
		printf("0\n");
		return (0);
	}
	count = 0;

	for (i = 0; i < numCoins; i++)
	{
		count += total / cents[i];
		total %= cents[i];
	}

	printf("%d\n", count);
	return (0);
}
