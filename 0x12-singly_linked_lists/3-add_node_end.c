#include "lists.h"

/**
 *add_node_end - adds a new node at the end of the list
 *@head: pointer to the pointer to the head of the list
 *@str: string to be added
 *
 *Return: address of the new element
 *   NULL if the function fails
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp, *last;
	char *dup;

	temp = *head;
	last = malloc(sizeof(list_t));
	if (last == NULL)
		return (NULL);

	dup = strdup(str);
	if (dup == NULL)
	{
		free(last);
		return (NULL);
	}

	last->str = dup;
	last->len = _strlen(str);
	temp->next = NULL;

	if (*head == NULL)
	{
		*head = last;
		return (*head);
	}

	while (temp->next != NULL)
		temp = temp->next;

	temp->next = last;

	return (last);
}
