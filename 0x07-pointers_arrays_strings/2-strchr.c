#include "main.h"
#include <stdio.h>

/**
 *_strchr - Locates a character in a string.
 *@s: A pointer to the string to search.
 *@c: The character to locate.
 *
 *Return: If c is found - a pointer to the first occurrence.
 *If c is not found - NULL.
 */
char *_strchr(char *s, char c)
{
while (*s)
{
if (*s == c)
return (s);
s++;
}

if (*s == c)
return (s);

return (NULL);
}
