#include <stdio.h>
#include <stdlib.h>
/**
 * main - adds positive numbers
 * @argc: number of commandline arguments
 * @argv: array of commandline arguments
 * Return: 0
 */

int main(int argc, char **argv)
{
	char *flag;
	int sum = 0, k, i = 1;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	while (argv[i])
	{
		 k = strtol(argv[i], &flag, 10);

		 if (*flag)
		 {
			 printf("Error\n");
			 return (1);
		 }
		 else
		 {
			 sum += k;
		 }
		 i++;
	}
	printf("%d\n", sum);
	return (0);
}
