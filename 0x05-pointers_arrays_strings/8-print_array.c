#include "main.h"
#include <stdio.h>

/**
 *print_array - prints elements of an array
 *@a: array to be printed
 *@n: number of elements to be printed
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i == n - 1)
			continue;
		printf(", ");
	}
	printf("\n");
}
