#include<stdio.h>
#include<stdlib.h>

/**
 *create_array - creates an array of characters and initializes it 
 * with a specific character
 *@size: size of array
 *@c: character
 *
 *Return: pointer to the allocared memory
 */

char *create_array(unsigned int size, char c)
{
	int *ptr;

	if (size == 0)
		return (NULL);
	else
	{
		ptr = (int*) malloc(size * sizeof(char));
		if (ptr == NULL)
			return (NULL);
		return (ptr);
	}
}
