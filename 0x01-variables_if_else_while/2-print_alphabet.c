#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: 'prints alphabets in lowercase'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char alphas[] = "abcdefghijklmnopqrstuvwxyz";

for (int i = 0; i < 26; i++)
{
putchar(alphas[i]);
}

return (0);
}
