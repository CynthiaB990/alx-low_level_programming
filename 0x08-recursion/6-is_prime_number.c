#include <stdio.h>

/**
 *is_divisible - checks if n is divisible by div
 *@n: the number to check
 *@div: the divisor
 *
 *Return: 1 if n is divisible by div, otherwise 0
 */
int is_divisible(int n, int div)
{
if (div == 1)
return (0);

if (n % div == 0)
return (1);

return (is_divisible(n, div - 1));
}

/**
 *is_prime_number - checks if a number is prime
 *@n: the number to check
 *
 *Return: 1 if n is prime, otherwise 0
 */
int is_prime_number(int n)
{
if (n <= 1)
return (0);

if (n == 2)
return (1);

return (!is_divisible(n, n - 1));
}
