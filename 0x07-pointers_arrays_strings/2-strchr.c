#include "main.h"

/**
 *_strchr - returns a pointer to the first occurence of a character
 * c in a string
 *@s: pointer to the string s
 *@c: character being searched for
 *
 *Return: pointer to the first occurence of the character c in s
 */

char *_strchr(char *s, char c)
{
	int i;
	char *p;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			p = &s[i];
			return (p);
		}
	}

	return ('\0');
}
