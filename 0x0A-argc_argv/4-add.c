#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 *main - Entry point
 *@argc: argument counter
 *@argv: argument vector
 *
 *Return:0 on sucess, 1 if otherwise.
 */

int main(int argc, char **argv)
{
	int i, sum = 0;

	if (argc <= 1)
		printf("0\n");
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (isdigit(argv[i]))
				sum += atoi(argv[i]);
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", sum);

		return (0);
	}
}
