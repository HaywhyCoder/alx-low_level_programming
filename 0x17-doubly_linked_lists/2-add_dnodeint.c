#include "lists.h"

/**
 *add_dnodeint - adds a node at the beginning of a dlistint_t list
 *@head: pointer to head pointer
 *@n: number to be added
 *
 *Return: the address of the new element
 *        otherwise, NULL if the function fails
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t *));
	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = *head;
	new_node->prev = NULL;

	if (*head != NULL)
	{
		(*head)->prev = new_node;
	}
	*head = new_node;

	return (*head);
}
