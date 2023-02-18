#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: 'all possible combinations of 2 single-digit numbers'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int num1;
int num2;
for (num1 = 0; num1 < 10; num1++)
{
for (num2 = 1; num2 < 10; num2++)
{
if (num1 != num2 && num2 > num1)
{
putchar(num1 + '0');
putchar(num2 + '0');
if ( num1 + num2 != 17)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
