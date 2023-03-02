#include "main.h"
#include <unlstd.h>

/*
 *_putchar - writes the character c to stdout
 *@c: chracter to print
 *
 *Return: Success 1.
 *On error, -1 is returned, 
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
