#include "main.h"

/**
 *_strlen - returns the length of the string
 *@s: string to be checked
 *
 *Return: the length of the string checked
 */

int _strlen(char *s)
{
	int count;

	for (count = 0; *s != '\0'; s++)
		count++;
	return (count);
}
