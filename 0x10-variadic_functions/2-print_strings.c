#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 *print_strings - print strings followed by a new line
 *@separator: string separator
 *@n: number of strings passed to the function
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		if (va_arg(ap, char *) == NULL)
			printf("(nil)");
		else
			printf("%s", va_arg(ap, char *));

		if (i == n - 1)
			continue;

		if (separator != NULL)
			printf("%s", separator);
	}
	va_end(ap);

	printf("\n");
}
