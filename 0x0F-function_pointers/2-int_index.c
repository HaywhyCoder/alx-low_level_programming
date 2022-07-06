#include "function_pointers.h"

/**
 *int_index - searches an array for an integer
 *@array: array to be searched
 *@size: size of the array
 *@cmp: pointer to function used to compare values
 *
 *Return: index of the first matched element
 *        -1 if no match was found or size <= 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
		return (-1);
	}
	else
		return (-1);
}
