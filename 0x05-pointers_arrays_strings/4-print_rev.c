ba29692988810e2d15e8#include "main.h"

/**
 *print_rev - prints a string in reverse
 *@s: string to be reversed
 */

void print_rev(char *s)
{
	int n, i;

	for (n = 0; *s != '\0'; s++)
		n++;
	for (i = n - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
