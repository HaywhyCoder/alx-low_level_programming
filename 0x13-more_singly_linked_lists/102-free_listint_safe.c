#include "lists.h"

/**
 *free_listint_safe - frees a listint_t list and sets head to NULL
 *@h: pointer to head pointer
 *
 *Return: the size of the list that was freed
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *temp, *next;

	temp = malloc(sizeof(listint_t));

	while (*h != NULL)
	{
		next = (*h)->next;
		free(*h);
		*h = next;
	}
	*h = NULL;
}
