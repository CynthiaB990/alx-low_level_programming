#include "main.h"
#include <stdio.h>


/**
 *print_alphabet - Prints the lowercase alphabet, followed by a new line
 */

char *_strcat(char *dest, char *src)
{
char *putchar = dest;

/* Move ptr to the end of dest */
while (*ptr != '\0') 
{
putchar++;
}

/* Copy src to the end of dest */
while (*src != '\0') 
{
*putchar++ = *src++;
}

/* Add null terminator */
*putchar  = '\0';

return dest;
}
