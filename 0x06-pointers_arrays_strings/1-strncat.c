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
	int i = 0, int len = 0;

	while (dest[i] != '\0')
		len++;
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[len + i] = src[i];
	dest[len + i] = '\0';

	return (dest);
}
