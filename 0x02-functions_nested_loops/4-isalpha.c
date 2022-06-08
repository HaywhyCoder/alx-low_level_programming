#include "main.h"

/**
 *_isalpha - checks if a character is alphabetic
 *@c: character to be checked
 *
 *Return: 1 if alphabetic. 0 if otherwise
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return 1;
	}
	else
		return 0;
}
