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
	listint_t *new_node, *prev;
	size_t count = 0;

	if (*head == NULL)
		return (NULL);

	while (count < (idx - 1))
	{
		prev = (*head)->next;
		*head = (*head)->next;
		count++;
	}
	if (prev == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	prev->next = new_node;
	new_node->n = n;
	new_node->next = (*head)->next;

	return (new_node);
}
