#include "main.h"

/**
 *_memset - fills the first n bytes of memory area
 *pointed to by s with the constant b
 *@s: pointer to the memory to be filled
 *@b: character to fill the memory area with
 *@n: number of bytes to be filled
 *
 *Return: pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int index;
	char *memory = s, value = b;

	for (index = 0; index < n; index++)
		memory[index] = value;

	return (memory);
}
