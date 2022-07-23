#include "main.h"

/**
 *binary_to_uint - converts a binary number to an unsigned int
 *@b: pointer to the binary string
 *
 *Return: the converted number
 *        0 if he string is empty or contains any character other than 0 or 1
 */
unsigned int binary_to_uint(const char *b)
{
	size_t num = 0, mul = 1;
	int len = 0, i = 0;

	if (b == NULL)
		return (0);

	while (b[i++])
		len++;

	for (len - 1; len >= 0; len--)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
		num += (b[len] - '0') * mul;
		mul *= 2;
	}
	return (num);
}
