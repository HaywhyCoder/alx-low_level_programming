#include "main.h"

/**
 *rev_string - reverses a string
 *@s: string to be reversed
 */

void rev_string(char *s)
{
	int n = 0, i = 0;

	while (s[i++])
		n++;

	for (i = (n - 1); i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
