#include "main.h"

/**
 *_sqrt_recursion - returns the natural square root of a number
 *@n: number
 *
 *Return: the square root of n
 */

int _sqrt_recursion(int n)
{
	int ans;

	if (n % n != 0)
		return (-1);
	else if(n / n == n)
	{
		ans = n;
		return (ans);
	}
	else
}
