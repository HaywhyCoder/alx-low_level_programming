#include <stdio.h>

/**
 *main - Entry point
 *@argc: argument counter
 *@argv: argument vector
 *
 *Return: 0
 */

int main(int argc, char **argv)
{
	if (*argv != 0)
		printf("%d\n", argc - 1);

	return (0);
}
