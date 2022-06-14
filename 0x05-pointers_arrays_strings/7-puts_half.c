#include "main.h"

/**
 *puts_half - prints half of a string
 *@str: string argument
 */

void puts_half(char *str)
{
	int i, n = 0;

	for (i = 0; str[i] != '\0'; i++)
		n++;
	if (n % 2 == 0)
	{
		for (i = n / 2; str[i] != '\0'; i++)
			_putchar(str[i]);
	}
	else
		for (i = ((n + 1) / 2); str[i] != '\0'; i++)
			_putchar(str[i]);
	_putchar('\n');
}
