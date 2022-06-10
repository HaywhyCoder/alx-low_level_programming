#include "main.h"

/**
 *print_diagonal - prints a diagonal line
 *@n: number of times the diagonal character should be printed
 */

void print_diagonal(int n)
{
	int count, space;

	if (n > 0)
	{
		for (count = 0; count < n; count++)
		{
			for (space = 0; space < count; space++)
				_putchar(' ');
			_putchar('\\');

			if (count == n - 1)
				continue;
			_putchar('\n');
		}
	}
	_putchar('\n');
}
