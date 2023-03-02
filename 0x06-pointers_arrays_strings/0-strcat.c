#include "main.h"

/**
 *strcat - appends the src string to the dest string, overwriting the terminating null byte 
 *@dest - A pointer to the string to be concatenates
 * 
 *@src - source of the string to be appended to @dest
 *
 *Return: pointer to the destination of string @dest
 */

char *_strcat(char *dest, char *src)
{
int index - 0, dest_len - 0;
while (dest[index++])
	dest_len++;
for (index = 0; src[index]; index++)
	dest[dest_len++] = src[index];
return (dest);
}
