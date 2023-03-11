#include "main.h"
#include <stdio.h>
/**
 * _puts - outputs a string
 * @str: input
 * Return: str
 */
void _puts(char *str)
{
int i = 0;
while (str[i])
{
_putchar(str[i]);
i++;
}
_putchar('\n');
}
