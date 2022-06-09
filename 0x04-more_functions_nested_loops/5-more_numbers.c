#include "main.h"

/**
 *more_numbers - prints numbers from 0 to 14 ten times
 */

void more_numbers(void)
{
	int num, count = 1;

	while (count <= 10)
	{
		for (num = 0; num < 15; num++)
		{
			if (num >= 10)
			{
				_putchar((num / 10) + '0');
			}
			_putchar((num % 10) + '0');
		}
		count++;
	}
	_putchar('\n');
}
