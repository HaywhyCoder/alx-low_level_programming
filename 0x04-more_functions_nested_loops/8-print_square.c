#include "main.h"

/**
 *print_square - prints a square
 *@size: size of the square to be printed
 */

void print_square(int size)
{
	int count, n;

	while (size > 0)
	{
		for (n = 0; n < size; n++)
		{
			for (count = 0; count < size; count++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
		break;
	}
	_putchar('\n');
}
