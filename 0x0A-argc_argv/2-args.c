#include "main.h"
#include <stdio.h>
/**
 * main - main function
 * @argc: input
 * @argv: input
 * Return: ALways (0) success
 */

int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
