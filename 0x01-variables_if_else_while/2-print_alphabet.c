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
char al = 'a';
int i = 0;
while (al <= 'z')
{
putchar(al);
i++;
}
putchar('\n');

return (0);
}
