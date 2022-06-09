#include "main.h"

/**
 *print_most_numbers - print numbers from 0 to 9 except 2 and 4
 */

void print_most_numbers(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		if (num != 4 && num != 2)
			_putchar((num % 10) + '0');
	}
	_putchar('\n');
}
