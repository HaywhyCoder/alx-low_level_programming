#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *@argc: argument counter
 *@argv: argument vector
 *
 *Return: 1 if number of argument passed is not 2
 *        0 if otherwise.
 */

int main(int argc, char *argv[])
{
	int ans, i, cent, coins[5] = {25, 10, 5, 2, 1};

	ans = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cent = atoi(argv[1]);
	while (cent > 0)
	{
		for (i = 0; i < 5; i++)
		{
			if (cent < coins[i])
				continue;
			ans += (cent / coins[i]);
			cent %= coins[i];
		}
	}
	printf("%d\n", ans);

	return (0);
}
