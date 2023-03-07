#include <stdio.h>

/**
 *print_diagsums - prints the sum of the two diagonals of a squares
 *@a: pointer to the first element of the matrix
 *@size: size of the matrix
 *
 *Return: void
 */
void print_diagsums(int *a, int size)
{
{
int i;
int sum1 = 0, sum2 = 0;
int index1 = 0, index2 = size - 1;

for (i = 0; i < size; i++) {
sum1 += *(a + index1);
sum2 += *(a + index2);
index1 += size + 1;
index2 += size - 1;
}
printf("%d, %d\n", sum1, sum2);
return (0);
}
