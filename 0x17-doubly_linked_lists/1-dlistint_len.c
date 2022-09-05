#include "lists.h"

/**
 *dlistint_len - finds the number of elements in a dlistint_t linked list
 *@h: head pointer
 *
 *Return: the number of elements in the linked list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t n = 0;

	while (h->next != NULL)
	{
		n++;
		h = h->next;
	}
	return (n);
}
