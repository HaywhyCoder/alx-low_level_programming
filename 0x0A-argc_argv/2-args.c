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
	int i;

	while (argc > 0)
	{
		for (i = 0, i < argc, i++)
			printf("%s\n", argv[i]);
	}
	return (0);
}
