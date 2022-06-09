#include "main.h"

/**
 *print_square - prints a square
 *@size: size of the square to be printed
 */

void print_square(int size)
{
	int count;

	while (size > 0)
	{
		for (count = 0; count < size; count++)
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
