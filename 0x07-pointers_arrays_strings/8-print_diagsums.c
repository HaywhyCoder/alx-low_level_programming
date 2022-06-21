#include <stdio.h>

/**
 *print_diagsums - prints the sum of the  two diagonals of
 * a square matrix
 *@a: the matrix of integers
 *@size: the size of matrix
 */

void print_diagsums(int *a, int size)
{
	int index, sum1 = 0, sum2 = 0;

	for (index = 0; index < size; index++)
	{
		sum1 += a[index];
		a += size;
	}
	printf("%d, %d", sum1, sum2);
}