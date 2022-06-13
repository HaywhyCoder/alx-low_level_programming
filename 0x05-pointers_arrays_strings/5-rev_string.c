#include "main.h"

/**
 *rev_string - reverses a string
 *@s: string to be reversed
 */

void rev_string(char *s)
{
	int n, i =0;

	for (n = 0; *s != '\n'; s**)
		n++;

	for (i = (n - 1); i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
