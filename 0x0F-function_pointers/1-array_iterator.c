#include "function_pointers.h"

/**
 *array_iterator - execute a function on each element of an array
 *@array: an array of type int
 *@size: size of the array
 *@action: function pointer
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
		action(*(array[i]));
}
