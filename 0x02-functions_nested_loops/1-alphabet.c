#include <stdio.h>
#include <stdlib.h>

/**
 * print_alphabet - function
 *
 * Description: 'contains the code for alphabets'
 *
 * Return: Always 0 (Success)
 */
int print_alphabet(void)
{
char c;
for (c = 'a'; c <= 'z'; c++)
{
putchar(c);
}

return (0);
}
/**
 * main - Entry point
 *
 * Description: 'contains the alphabet function'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
print_alphabet();

return (0);
}
