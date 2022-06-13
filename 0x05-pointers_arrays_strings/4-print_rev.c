#include "main.h"

/**
 *print_rev - prints a string in reverse
 *@s: string to be reversed
 */

void print_rev(char *s)
{
	int n = 0, i = 0;

	while (s[i++])
		n++;

	for (i = (n - 1); i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
