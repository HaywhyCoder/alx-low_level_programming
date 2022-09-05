#include "lists.h"

/**
 *get_dnodeint_at_index - gets the nth node of a dlistint_t list
 *@head: head pointer
 *@index: node index
 *
 *Return: the address of the nth node
 *        otherwise, NULL if the node doesn't exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head->next != NULL)
	{
		if (i == index)
			return (head);
		i++;
		head = head->next;
	}
	return (NULL);
}
