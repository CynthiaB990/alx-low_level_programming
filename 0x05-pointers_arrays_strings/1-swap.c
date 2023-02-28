#include <stdio.h>

/**
 *swap_int - Swaps the values of two integers.
 *@a: Pointer to an integer to swap.
 *@b: Pointer to another integer to swap.
 *
 *Return: void
 */
void swap_int(int *a, int *b)
{
int temp;

temp = *a;
*a = *b;
*b = temp;
}
