#include <stdio.h>

/**
 *sqrt_helper - calculates the square root of n recursively
 *@n: the number to calculate the square root of
 *@i: the current value to check for being the square root of n
 *
 *Return: the square root of n, or -1 if no square root exists
 */
int sqrt_helper(int n, int i)
{
if (i * i == n)
return (i);
if (i * i > n)
return (-1);

return (sqrt_helper(n, i + 1));
}
