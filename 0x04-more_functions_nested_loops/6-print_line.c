#include "main.h"

/**
 *print_line - prints a line
 *@n: number of line character to be printed
 */

void print_line(int n)
{
	int count;

	while (n > 0)
	{
		for (count = 1; count <= n; count++)
		{
			_putchar('_');
		}
		break;
	}
	_putchar('\n');
}
