#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * puts_half - prints the second half of a string
 * @str: the string to print
 */
void puts_half(char *str)
{
int len = strlen(str);
int i;

for (i = (len + 1) / 2; i < len; i++)
{
putchar(str[i]);
}
putchar('\n');
}
