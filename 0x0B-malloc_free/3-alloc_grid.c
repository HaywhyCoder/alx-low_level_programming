#include "main.h"
#include <stdlib.h>

/**
 *alloc_grid - returns a pointer to a 2-dimensional array of integers
 *@width: number of columns
 *@height: number of rows
 *
 *Return: pointer to array
 */

int **alloc_grid(int width, int height)
{
	int **ptr, i, j; 

	if (width <= 0 || height <= 0)
		return (NULL);

	ptr = malloc((width * height) * sizeof(int));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			ptr[i][j] = 0;
		}
	}
	return (ptr);
}
