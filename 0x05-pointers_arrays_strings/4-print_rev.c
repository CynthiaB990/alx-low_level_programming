#include <stdio.h>
#include <string.h>

/**
 *main - check the code
 *
 *Return: Always 0.
 */

void print_rev(char *s)
{
int len = strlen(s);
for (int i = len - 1; i >= 0; i--) 
{
putchar(s[i]);
}  
putchar('\n');
}
