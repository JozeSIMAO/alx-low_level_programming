#include "main.h"
/**
 * main - lowercase only
 * Return: Always (0) success
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}
