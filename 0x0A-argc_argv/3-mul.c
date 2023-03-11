#include "main.h"
#include <stdio.h>

/**
 * _atoi - convert a string into an integer.
 *
 * @s: the string to use.
 *
 * Return: integer.
 */
int _atoi(char *s)
{
int sign = 1, i = 0;
unsigned int res = 0;
while (!(s[i] <= '9' && s[i] >= '0') && s[i] != '\0')
{
if (s[i] == '-')
sign *= -1;
i++;
}
while (s[i] <= '9' && (s[i] >= '0' && s[i] != '\0'))
{
res = (res * 10) + (s[i] - '0');
i++;
}
res *= sign;
return (res);
}

/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 (Success), 1 (Error)
 */

int main(int argc, char *argv[])

{

	int result, num1, num2;



	if (argc < 3 || argc > 3)

	{

		printf("Error\n");

		return (1);

	}



	num1 = _atoi(argv[1]);

	num2 = _atoi(argv[2]);

	result = num1 * num2;



	printf("%d\n", result);



	return (0);

}
