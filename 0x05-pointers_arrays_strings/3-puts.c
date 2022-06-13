#include "main.h"

/**
 *_puts - prints a character to stdout
 *@str: string to be printed
 */

void _puts(char *str)
{
	int n;

	for (n = 0; str[n] != '\0'; n++)
	{
		_putchar(str[n]);
	}
	_putchar('\n');
}
