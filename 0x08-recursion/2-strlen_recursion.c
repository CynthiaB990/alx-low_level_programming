#include <stdio.h>

/**
 *_strlen_recursion - returns the length of a string
 *@s: string to calculate length of
 *
 *Return: length of string
 */
int _strlen_recursion(char *s)
{
int len = 0;

if (*S)
{
len++;
len += _strlen_recursion(s + 1);
}
}
