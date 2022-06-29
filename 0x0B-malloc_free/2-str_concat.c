#include "main.h"
#include <stdlib.h>

/**
 *str_concat - concatenates two strings
 *@s1: first string
 *@s2: second string
 *
 *Return: NULL on failure
 *        pointer to the concatenated string on success.
 */

char *str_concat(char *s1, char *s2)
{
	int i, j, a, b, c, d;
	char *ptr;

	j = a = b = c = d = 0;

	if (s1 == NULL)
		s1 = " ";
	if (s2 == NULL)
		s2 = " ";

	while (s1[a++])
		j++;
	while (s2[b++])
		c++;

	ptr = malloc(sizeof(char) * (j + c + 1));
	if (ptr = NULL)
		return (NULL);

	for (i = 0; i < j; i++)
		ptr[d++] = s1[i];

	for (i = 0; i < c; i++)
		ptr[d++] = s2[i];

	ptr[j + c] = '\0';

	return (ptr);
}
