#include <stdio.h>

/**
 *main - Entry point
 *
 *Return: 0
 */

int main(void)
{
	unsigned long num1, num2, sum;
	int total;

	while (sum < 4000000)
	{
		sum = num1 + num2;
		num1 = num2;
		num2 = sum;
		if (sum % 2 == 0)
			total += sum;		
	}
	printf("%d\n", sum);
	return (0);
}
