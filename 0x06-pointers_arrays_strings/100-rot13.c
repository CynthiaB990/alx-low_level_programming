#include "main.h"
#include <stdio.h>


/**
 *rot13 - encodes a string using rot13
 *@s: input string
 *
 *Return: encoded string
 */
char *rot13(char *s)
{
char *p = s;
int i;


while (*p)
{
for (i = 0; (p[i] >= 'A' && p[i] <= 'Z') || (p[i] >= 'a' && p[i] <= 'z'); i++)
{
if ((p[i] >= 'A' && p[i] <= 'M') || (p[i] >= 'a' && p[i] <= 'm'))
p[i] += 13;
else
p[i] -= 13;
}
p += i;
}
return s;
}
