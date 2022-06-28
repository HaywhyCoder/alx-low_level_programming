#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *@argc: argument counter
 *@argv: argument vector
 *
 *Return: 0
 */

int main(int argc, char *argv[])
{
	int ans, i, cent, coins[5] = {25, 10, 5, 2, 1};

	ans = 0;
	cent = atoi(argv[1]);
	if (argc == 2)
	{
		if (cent < 0)
			printf("0\n");
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
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
