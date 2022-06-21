#include "main.h"

/**
 *_strspn - gets the length of a prefix substring
 *@s: string to be checked
 *@accept: the prefix to be counted
 *
 *Return: number of bytes of the initial segment s that
 *contains bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j, m = 0, k = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				m++;
				break;
			}
			else
				m = 0;
		}
		if (m == 0)
			break;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == s[j])
			{
				k++;
				break;
			}
		}
	}
	return (k);
}
