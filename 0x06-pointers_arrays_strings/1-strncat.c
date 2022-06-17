#include "main.h"

/**
 *_strncat - concatenates two strings using at most n bytes from the src string
 *@dest: destination string
 *@src: source string
 *@n: number of bytes of source string
 *
 *Return: pointer to the resulting dest string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, len = 0;

	while (dest[i++])
		len++;
	for (i = 0; i < n && src[i]; i++)
		dest[len++] = src[i];

	return (dest);
}
