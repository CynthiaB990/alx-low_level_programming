#include "main.h"


/**
 *string_toupper - changes all lowercase letters of a string to uppercase
 *@s: the string to modify
 *
 *Return: the modified string
 */
char *string_toupper(char *s)
{
char *p = s;


while (*p)
{
if (*p >= 'a' && *p <= 'z')
{
*p = *p - 'a' + 'A';
}
p++;
}


return s;
}
