#include "main.h"

/**
 *_strpbrk - searches a string for any set of bytes
 *@s: pointer to string to be searched
 *@accept: pointer to substring
 *
 *Return: pointer to the byte in string that matches a byte
 *in substring
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == accept)
			return (s[i]);
	}
	return ('\0');
}
