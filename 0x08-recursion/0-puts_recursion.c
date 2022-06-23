#include "main.h"

/**
 *_puts_recursion - prints a character followed by a newline to stdout
 *@s: character to be printed
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
