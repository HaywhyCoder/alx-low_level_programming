#include "main.h"

/**
 *_strcat - appends the src string to the dest string
 *@dest: destination string
 *@src: source string
 *
 *Return: pointer to the concatenated string
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, len_dest = 0;

	for (i = 0; dest[i] != '\0'; i++)
		len_dest++;
	for (i = 0; src[i]; i++)
		dest[len_dest++] = src[i];

	return (dest);
}
