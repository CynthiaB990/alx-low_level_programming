#include "main.h"

/**
 * print_rev - Prints a string in reverse
 * @s: The string to be printed
 */
void print_rev(char *s)
{
int len = 0;

/* Find the length of the string */
 while (*(s + len))
        len++;

/* Print the string in reverse */
for (int i = len - 1; i >= 0; i--)
_putchar(*(s + i));

 /* Print a newline character */
 _putchar('\n');
}
