#include "main.h"

/**
 * rev_string - reverses a string
 * @s : is the string
 * Return : Always (0) success
 */

void rev_string(char *s)
{
int i = 0;
int aux = 0;
char temp;
while (*(s + i) != '\0')
i += 1;
i -= 1;
while (aux < i)
{
temp = s[i];
s[i] = s[aux];
s[aux] = temp;
aux++;
i--;
}
}
