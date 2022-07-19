#include "lists.h"

/**
 *reverse_listint - Reverses a linked list
 *@head: pointer to pointer to head
 *
 *Return: pointer to head of the list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *next, *prev = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev;

		prev = (*head);
		(*head) = next;
	}
	(*head) = prev;

	return (*head);
}
