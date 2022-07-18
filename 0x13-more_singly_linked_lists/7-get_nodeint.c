#include "lists.h"

/**
 *get_nodeint_at_index - gets the nth node of a listint_t list
 *@head: pointer to head of the list
 *@index: index of node to be returned
 *
 *Return: the address of the node
 *        NULL if the index doesn't exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head)
	{
		if (index == i)
			return (head);
		head = head->next;
		i++;
	}
	return (NULL);
}
