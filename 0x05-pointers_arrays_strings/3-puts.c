#include <stdio.h>

/**
 *main - check the code
 *
 *Return: Always 0.
 */

void _puts(char *str)
{
while (*str != '\0')
{
putchar(*str);
str++;
}
putchar('\n');
str = "I do not fear computers. I fear the lack of them - Isaac Asimov";
_puts(str);
return (0);
}
