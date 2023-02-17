#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Description: 'prints alphabets in lowercase'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char lc;
char lb;
for (lc = 'a'; lc <= 'z'; lc++)
{
putchar(lc);
}
for (lb = 'A'; lb <= 'Z'; lb++)
{
putchar(lb);
}
putchar('\n');

return (0);
}

