#include <stdio.h>
#include <stdlib.h>
#include <main.h>
/**
 * alpha - function
 *
 * Description: 'contains the code for alphabets'
 *
 * Return: Always 0 (Success)
 */
int alpha(void)
{
char c;
for (c = 'a'; c <= 'z'; c++)
{
putchar(c);
}
}
/**
 * main - Entry point
 *
 * Description: 'contains the alpha function'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
alpha();

return (0);
}
