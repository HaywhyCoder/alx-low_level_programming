#include<stdio.h>
#include<stdlib.h>
#include "main.h"

/**
 *create_array - creates an array of characters and initializes it
 * with a specific character
 *@size: size of array
 *@c: character
 *
 *Return:if size = 0 or function fails: 0
 *       pointer to the allocated memory
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	if (size == 0)
		return (NULL);
	ptr = malloc(size * sizeof(c));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		ptr[i] = c;
	return (ptr);
}
