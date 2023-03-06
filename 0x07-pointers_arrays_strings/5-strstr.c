#include <stdio.h>

/**
 *_strstr - finds the first occurrence of the substring needle
 *@haystack: the string to search in
 *@needle: the substring to search for
 *
 *Return: pointer to the beginning of the located substringd
 */
char *_strstr(char *haystack, char *needle)
{
char *haystack_ptr, *needle_ptr;

while (*haystack)
{
haystack_ptr = haystack;
needle_ptr = needle;

while (*haystack_ptr && *needle_ptr && *haystack_ptr == *needle_ptr)
{
haystack_ptr++;
needle_ptr++;
}

if (!*needle_ptr)
return (haystack);

haystack++;
}

return (NULL);
}
