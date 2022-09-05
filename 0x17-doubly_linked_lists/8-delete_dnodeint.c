#include "lists.h"

/**
 *delete_dnodeint_at_index - deletes the node at an index of dlistint_t list
 *@head: pointer to head pointer
 *@index: index of node to be deleted
 *
 *Return: On success, 1
 *        otherwise, -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i;
	dlistint_t *tmp = *head;

	i = 0;
	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(tmp);
		return (1);
	}

	while (i < (index - 1))
	{
		if ((*head)->next == NULL)
			return (-1);
		i++;
		*head = (*head)->next;
	}

	tmp = (*head)->next;
	(*head)->next = (*head)->next->next;
	(*head)->next->next->prev = *head;
	free(tmp);
	return (1);
}
