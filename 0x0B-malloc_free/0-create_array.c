#include <stdio.h>
#include <stdlib.h>

/**
 *create_array - Creates an array of chars and
 *initializes it with a specific char.
 *@size: The size of the array to be initialized.
 *@c: The specific char to intialize the array with.
 *
 *Return: If size == 0 or the function fails - NULL.
 * Otherwise - a pointer to the array.
 */
char *create_array(unsigned int size, char c)
{
unsigned int i;

char *s;

if (size == 0)

return (NULL);

s = malloc(size * sizeof(char));

if (s == NULL)

return (NULL);

for (i = 0; i < size; i++)
{
s[i] = c;
}
return (s);
}
