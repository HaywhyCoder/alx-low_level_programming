#include "main.h"

/**
 *_strcmp - compares two strings
 *@s1: string 1
 *@s2: string 2
 *
 *Return: difference between string 1 and 2
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] == s2[i]; i++)
		if (s1[i] == '\0')
			return (0);
	return (s1[i] - s2[i]);
}
