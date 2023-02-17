#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Description: 'all single digit numbers of base 10 starting from 0'
 *
 * Return: Always 0 (Success)
 */
int main()
{
int num;
for(num = 0; num < 16; num++)
putchar((num % 10)+(0));
putchar('\n');
return (0);
}
