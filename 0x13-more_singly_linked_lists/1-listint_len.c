#include "lists.h"

/**
 *lisint_len - returns the number of elements in a linked listint list
 *@h: pointer to head of the list
 *
 *Return: the number of elements in the list
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->n == NULL)
			continue;
		count++;
		h = h->next;
	}
	return (count);
}
