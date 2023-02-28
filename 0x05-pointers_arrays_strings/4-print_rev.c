#include "main.h"
#include <stdio.h>

/**
 *print_rev - Prints a string in reverse
 *@s: The string to be printed
 */
void print_rev(char *s)
{
int len = 0;

/* Find the length of the string */
while (s[len] != '\0')
{
len++;
}
/* Print the string in reverse */
for (len -= 1; len >= 0; len--)
{
putchar(s[len]);
}
/* Print a newline character */
_putchar('\n');
}
