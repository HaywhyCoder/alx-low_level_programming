#include "lists.h"

int _strlen(char *s);
list_t *add_node(list_t **head, const char *str);

/**
 *_strlen - returns the length of the string
 *@s: string to be checked
 *
 *Return: the length of the string checked
 */
int _strlen(char *s)
{
	int len = 0, i = 0;

	while (s[i++])
		len++;

	return (len);
}

/**
 *add_node - adds a new node at the beginning of the list
 *@head: pointer to the pointer to the head of the list
 *@str: string to be added
 *
 *Return: address of the new element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;
	char *dup;

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);

	dup = strdup(str);
	if (dup == NULL)
	{
		free(temp);
		return (NULL);
	}

	temp->str = dup;
	temp->len = _strlen(str);
	temp->next = *head;

	*head = temp;

	return (temp);
}
