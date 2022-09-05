#include "lists.h"

/**
 *insert_dnodeint_at_index - inserts a new node at a given index
 *@h: head pointer
 *@idx: node index
 *@n: number to be added to list
 *
 *Return: the address of the new node
 *        NULL, if it's not possible to insert new node at idx
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *temp = *h;
	unsigned int i = 0;

	new_node = malloc(sizeof(dlistint_t *));
	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = temp;
		*h = new_node;
		return (new_node);
	}

	while (i < (idx - 1))
	{
		if (temp == NULL || temp->next == NULL)
			return (NULL);
		i++;
		temp = temp->next;
	}

	new_node->next = temp->next;
	temp->next = new_node;
	new_node->prev = temp;
	if (new_node->next != NULL)
		new_node->next->prev = new_node;

	return (new_node);
}
