#include "lists.h"

/**
 *add_dnodeint_end - adds a new node at the end of a dlisint_t list
 *@head: pointer to the head pointer
 *@n: number to be added
 *
 *Return: the address of the new node
 *        otherwise, NULL on failure
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *last = *head, *new_node;

	new_node = malloc(sizeof(dlistint_t *));
	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = NULL;

	while (last->next != NULL)
	{
		last = last->next;
	}
	new_node->prev = last;
	last->next = new_node;

	if (*head == NULL)
	{
		*head = new_node;
	}
	return (new_node);
}
