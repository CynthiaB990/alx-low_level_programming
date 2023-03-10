#include "main.h"
#include <stdio.h>

/**
 *_atoi - Convert a string to an integer
 *@s: The string to convert
 *
 *Return: The converted integer
 */
int _atoi(char *s)
{
int result = 0;
int sign = 1;
int i = 0;

while (s[i] != '\0')
{
if (s[i] == '-')
sign = -1;
else if (s[i] >= '0' && s[i] <= '9')
result = result * 10 + (s[i] - '0') * sign;
else if (result != 0)
break;
i++;
}

return (result);
}
