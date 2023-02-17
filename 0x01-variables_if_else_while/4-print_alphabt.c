#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Description: 'prints alphabets in lowercase except q and e'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char lc;
for (lc = 'a'; lc <= 'z'; lc++)
{
if (lc != 'q' && lc != 'e')
{
putchar(lc);
}
}
putchar('\n');

return (0);
}
