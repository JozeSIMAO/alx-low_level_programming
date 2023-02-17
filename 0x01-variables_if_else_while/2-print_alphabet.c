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
int i = 0;
while (i < 26)
{
putchar(alphas[i]);
i++;

}

return (0);
}
