#include <stdio.h>

/**
 *is_palindrome - Check if a string is a palindrome.
 *@s: The string to check.
 *
 *Return: 1 if @s is a palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
int len = strlen(s);

if (len <= 1) /*/
return (1);
else if (*s != s[len - 1])
return (0);
else
{
s[len - 1] = '\0';
int result = is_palindrome(s + 1);
s[len - 1] = s[len];
return (result);
}
}
