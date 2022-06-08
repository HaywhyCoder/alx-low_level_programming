#include "main.h"

/**
 *print_to_98 - Prints from a number to 98 in order
 *@n: starting number
 *
 */

void print_to_98(int n)
{
	int start;

	if (n > 98)
	{
		for (start = n; start >= 98; start--)
		{
			_putchar((start / 10) + '0');
			_putchar((start % 10) + '0');
			if (start == 98)
				break;
			_putchar(',');
			_putchar(' ');
		}
	}
	else
	{
		for (start = n; n <= 98; start++)
		{
			_putchar((start / 10) + '0');
			_putchar((start % 10) + '0');
			if (start == 98)
				break;
			_putchar(',');
			_putchar(' ');
		}
	}
}
