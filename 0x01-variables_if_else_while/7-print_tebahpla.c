#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: 'prints the lowercase alphabet in reverse'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char lc;
for (lc = 'z'; lc >= 'a'; lc--)
putchar(lc);
putchar('\n');
return (0);
}
