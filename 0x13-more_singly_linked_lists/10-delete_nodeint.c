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
	listint_t *prev, *temp;
	unsigned int count = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	while ((count < (index - 1)) && (*head) != NULL)
	{
		prev = (*head)->next;
		*head = (*head)->next;
		count++;
	}

	if ((*head)->next == NULL)
		return (-1);

	temp = (*head)->next;
	prev->next = (*head)->next->next;
	free(temp);

	return (1);
}
