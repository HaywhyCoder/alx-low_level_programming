#include "main.h"

/**
 *rev_string - reverses a string
 *@s: string to be reversed
 */

void rev_string(char *s)
{
	int n = 0, i = 0;
	char tmp;

	while (s[i++])
		n++;

	for (i = (n - 1); i >= 0; i--)
	{
		tmp = s[i];
		s[i] = s[n - i - 1];
		s[n - i - 1] = tmp;
	}
}
