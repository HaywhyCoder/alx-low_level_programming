#include "lists.h"

/**
 *delete_nodeint_at_index - deletes node at given index of the list
 *@head: pointer to pointer to head
 *@index: imdex of node to be deleted
 *
 *Return: 1 if the function succeed, otherwise -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prev = *head, *temp;
	unsigned int count = 0;

	if (prev == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(prev);
		return (1);
	}

	while (count < (index - 1))
	{
		if (prev->next == NULL)
			return (-1);
		prev = prev->next;
		count++;
	}

	if ((*head)->next == NULL)
		return (-1);

	temp = prev->next;
	prev->next = temp->next;
	free(temp);

	return (1);
}
