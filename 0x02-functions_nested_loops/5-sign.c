#include "main.h"

/**
 *print_sign - checks if a number is greater or less than zero
 *@n: number to be checked
 *
 *Return: 1 if greater than zero. 0 if zero. -1 if less than zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
