#include "lists.h"

/**
 *add_nodeint_end - adds a new node at the end of a listint_t list
 *@head: pointer to head pointer
 *@n: new number to be added to list
 *
 *Return: address of the new node
 *        NULL if the function fails.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *tail, *temp;

	tail = malloc(sizeof(listint_t));
	if (tail == NULL)
		return (NULL);

	tail->n = n;
	tail->next = NULL;

	if (*head == NULL)
	{
		*head = tail;
		return (*head);
	}

	temp = *head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = tail;

	return (*head);
}
