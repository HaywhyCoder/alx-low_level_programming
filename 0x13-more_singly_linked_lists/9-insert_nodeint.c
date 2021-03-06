#include "lists.h"

/**
 *insert_nodeint_at_index - inserts a new node at a given position
 *@head: pointer to head of the list
 *@idx: index to insert new node
 *@n: number to be inserted
 *
 *Return: address of the new node
 *        NULL if the function fails
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *prev = *head;
	unsigned int count = 0;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = prev;
		*head = new_node;
		return (new_node);
	}

	while (count < (idx - 1))
	{
		if (prev == NULL || prev->next == NULL)
		return (NULL);

		prev = prev->next;
		count++;
	}

	new_node->next = prev->next;
	prev->next = new_node;

	return (new_node);
}
