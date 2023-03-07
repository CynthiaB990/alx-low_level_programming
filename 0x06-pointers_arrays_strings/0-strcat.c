#include <stdio.h>

/**
 *_strcat - concatenates two strings
 *@dest: destination string
 *@src: source string
 *
 *Return: pointer to resulting string dest
 */
char *_strcat(char *dest, char *src)
{
int dest = 0;
int src = i;

while (dest[dest] != '\0')
{
dest++;
}
for (i = 0; src[i] != '\0'; i++)
{
dest[dest + i] = src[i];
}
dest[dest + i] = '\0';

return (dest);
}
