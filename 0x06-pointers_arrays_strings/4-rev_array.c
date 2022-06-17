#include "main.h"

/**
 *reverse_array - reverses the content of an integer array
 *@a: array to be reversed
 *@n: number of elements in the array
 */

void reverse_array(int *a, int n)
{
	int tmp, i;

	for (i = n; i >= (n / 2); i--)
	{
		tmp = a[i];
		a[i] = a[n - i];
		a[n - i] = tmp;
	}
}
