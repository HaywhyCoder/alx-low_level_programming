#include "main.h"

/**
 *_memcpy - copies n bytes from memory area of src to memory area
 *dest
 *@dest: destination memory area
 *@src: source memory area
 *@n: number of bytes to be copied from source memory
 *
 *Return: pointer to dest memory area
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int index;
	char *mem = dest;

	for (index = 0; src[index] != '\0' && index < n; index++)
		dest[index] = src[index];
	for (; index < n; index++)
		dest[index] = '\0';

	return (mem);
}
