#include "main.h"

/**
 *_pow_recursion - raise a number x to the power of a value y
 *@x: number to be raised to a power
 *@y: value of power
 *
 *Return: value of x raised to the power of y
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	else if (y < 0)
		return (-1);
	else if (y == 1)
		return (x);
	else
		return (x * _pow_recursion(x, (y - 1)));
}
