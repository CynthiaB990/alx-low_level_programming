#include "main.h"

/**
 *_strcat - appends the src string to the dest string, overwriting the terminating null byte 
 *@dest - A pointer to the string to be concatenates
 * 
 *@src - source of the string to be appended to @dest
 *
 *Return: pointer to the destination of string @dest
 */

char *_strcat(char *dest, char *src)
{
int i;
int j;

i = 0;
while (dest[i] != '\0')
{
i++
}
j = 0;
while (src[j] != '\0')
{
dest[i] = src[j];
i++;
j++;
}
dest[i] - '\0';
return (dest);
}
