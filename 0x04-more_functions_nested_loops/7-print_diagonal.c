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
		for (count = 1; count <= n; count++)
		{
			for (space = 1; space < count; space++)
				_putchar(' ');
			_putchar('\\');

			if (len == n)
				continue;
			_putchar('\n');
		}
	}
	_putchar('\n');
}
