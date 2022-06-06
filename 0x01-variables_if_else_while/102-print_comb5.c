#include <stdio.h>

/**
 *main - Print all possible combination of two two-digit numbers
 *
 *Return: 0
 */

int main(void)
{
	int n1d1, n1d2, n2d1, n2d2; /*n - number, d-digit*/

	for (n1d1 = 0; n1d1 < 10; n1d1++)
	{
		for (n1d2 = 0; n1d2 < 9; n1d2++)
		{
			putchar((n1d1 % 10) + '0');
			putchar((n1d2 % 10) + '0');
			putchar(' ');
		}
	}
	for (n2d1 = 0; n2d1 < 10; n2d1++)
	{
		for (n2d2 = 0; n2d2 < 9; n2d2++)
		{
			putchar((n2d1 % 10) + '0');
			putchar((n2d2 % 10) + '0');

			if (n2d1 == 9 && n2d2 == 8)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
