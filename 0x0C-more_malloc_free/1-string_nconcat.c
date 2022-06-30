#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings using at
 *                  most an inputted number of bytes.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The maximum number of bytes of s2 to concatenate to s1.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - a pointer to the concatenated space in memory.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	int i, j, a, b, c;

	i = j = a = b = c = 0;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i++])
		a++;
	while (s2[j++])
		b++;
	if (n >= b)
		n = b;

	ptr = malloc(sizeof(char) * (a + n + 1));
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < a; i++)
		ptr[c++] = s1[i];
	for (i = 0; i < n && s2[i]; i++)
		ptr[c++] = s2[i];

	return (ptr);
}
