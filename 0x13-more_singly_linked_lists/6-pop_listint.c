#include "lists.h"

/**
 *pop_listint - deletes the head node of a listint_t list
 *@head: pointer to the head pointer
 *
 *Return: the head node's data (n)
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp = *head;
	int k;

	if (*head == NULL)
		return (0);

	k = tmp->n;
	*head = (*head)->next;

	free(tmp);
	return (k);
}
