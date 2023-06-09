#include <stdio.h>

/**
 * main - function
 * @argc: number of commandline arguments
 * @argv: array of commandline arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", *(argv + i));
		i++;
	}
	return (0);
}
