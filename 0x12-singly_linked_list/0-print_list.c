#include "lists.h"

/**
 *print_list - prints all the elements of a list
 *@h: pointer to the head of the list
 *
 *Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)");
		else
			printf("[%d] %s", h->len, h->str);
		n++;
		h = h->next;
	}
	return (n);
}
