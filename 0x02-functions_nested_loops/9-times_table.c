#include "main.h"

/**
 *times_table - prints the 9 times table starting from 0
 */

void times_table(void)
{
	int n, i, product;

	for (n = 0; n < 10; n++)
	{
		for (i = 0; i < 10; i++ )
		{
			product = i * n;
			if (product >= 10)
			{
				_putchar((product / 10) + '0');
				_putchar((product % 10) + '0');
			}
			else
				_putchar(product);
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
