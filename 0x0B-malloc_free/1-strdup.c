#include "main.h"
#include <stdlib.h>

/**
 *_strdup - returns a pointer to a new string which is a duplicate
 *           of the string str.
 *@str: string to be duplicated
 *
 *Return: if string = NULL or if memory is insufficient: NULL
 *        pointer to the duplicated string on success.
 */

char *_strdup(char *str)
{
	int i, j, c;
	char *ptr;

	i = j = c = 0;
	if (str == NULL)
		return (NULL);
	while (str[i++])
		j++;

	ptr = malloc(sizeof(char) * (j + 1));
	if (ptr == NULL)
		return (NULL);
	while ((ptr[c] = str[c]) != '\0')
		c++;

	return (ptr);
}
