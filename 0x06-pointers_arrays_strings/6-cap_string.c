#include "main.h"

/**
 *cap_string - capitalizes all the words of a string
 *@str: string to be capitalized
 *
 *Return: capitalized string
 */

char *cap_string(char *str)
{
	int i;

	for (i = -0; str[i] != '\0'; i++)
	{
		while (!(str[i] >= 'a' && str[i] <= 'z'))
			i++;
		if (str[i] == ' ' ||
		   str[i] == '\t' ||
		   str[i] == '\n' ||
		   str[i] == ',' ||
		   str[i] == ';' ||
		   str[i] == '.' ||
		   str[i] == '!' ||
		   str[i] == '?' ||
		   str[i] == '"' ||
		   str[i] == '(' ||
		   str[i] == ')' ||
		   str[i] == '{' ||
		   str[i] == '}')
			str[i + 1] -= 32;
	}
	return (str);
}
