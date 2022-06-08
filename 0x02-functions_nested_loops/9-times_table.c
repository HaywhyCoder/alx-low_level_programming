#include "main.h"

/**
 *times_table - prints the 9 times table starting from 0
 */

void times_table(void)
{
	int n, i, product;

	for (n = 0; n < 10; n++)
	{
		_putchar('0');

		for (i = 1; i < 10; i++ )
		{
			_putchar(',');
			_putchar(' ');

			product = i * n;
			if (product >= 10)
			{
				_putchar((product / 10) + '0');
				_putchar((product % 10) + '0');
			}
			else
			{
				_putchar(' ');
				_putchar(product);
			}
		}
		_putchar('\n');
	}
}
