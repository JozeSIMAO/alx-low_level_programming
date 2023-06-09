#include <stdio.h>

/**
 * main - function
 * @argc: int number of commandline arguments
 * @argv: array of commandline arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}
