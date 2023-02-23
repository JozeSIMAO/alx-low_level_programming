#include "main.h"
/**
 * _islower - lowercase only
 * @c: 'is to be checked'
 * Return: Always (0) success
 */
int _islower(int c)
{
if (c >= 'A' && c <= 'Z')
return (1);
else
return (0);
}
