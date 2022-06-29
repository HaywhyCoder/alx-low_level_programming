#include "main.h"
#include <stdlib.h>

/**
 *_strdup - returns a pointer to a new string which is a duplicate
 *           of the string str.
 *@str: string to be duplicated
 *
 *Return: if string = NULL or if memory is insufficient: NULL
 *        pointer to tge duplicated string on success.
 */

char *_strdup(char *str)
{
	int i = 0, j = 0, c = 0;
	char *ptr;

	if (str == NULL)
		return (NULL);
	while (str[i++])
		j++;

	ptr = malloc(j + 1);
	if (ptr == NULL)
		return (NULL);
	while ((ptr[c] == str[c]) != '\0')
		c++;

	return (ptr);
}
