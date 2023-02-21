#include "main.h"
/**
 * print-sign - prints sign of a number
 * Description: 'gives a sign to a number'
 * @n : is to be checked
 * Return: Always (0) success
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
}
