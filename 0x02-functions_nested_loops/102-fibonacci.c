#include <stdio.h>

/**
 *main - Entry point
 *
 *Return: 0
 */

int main(void)
{
	int i = 0;
	long int num1, num2, sum;

	while (i <50)
	{
		sum = num1 + num2;
		num1 = num2;
		num2 = sum;
		printf("%lu", sum);

		if (i == 49)
			printf("\n");
		else
			printf(", ");
   	}
	return (0);
}
