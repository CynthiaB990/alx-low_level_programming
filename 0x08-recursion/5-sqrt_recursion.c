#include <stdio.h>

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number to calculate the square root of
 *
 * Return: the natural square root of n, or -1 if n has no natural square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);

	return (sqrt_helper(n, 1));
}

/**
 * sqrt_helper - calculates the square root of n recursively
 * @n: the number to calculate the square root of
 * @i: the current value to check for being the square root of n
 *
 * Return: the square root of n, or -1 if no square root exists
 */
int sqrt_helper(int n, int i)
{
	if (i * i == n)
		return (i);
	if (i * i > n)
		return (-1);

	return (sqrt_helper(n, i + 1));
}

