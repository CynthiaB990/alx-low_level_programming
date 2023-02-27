#include <stdio.h>

/**
 *main - check the code
 *
 *Return: Always 0.
 */

int _strlen(char *s)
{
int len = 0;
while (*s != '\0') { // Keep incrementing len until the null terminator is reached
len++;
s++;
}
return len;
}
