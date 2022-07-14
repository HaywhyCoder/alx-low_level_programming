#include "lists.h"

int _strlen(char *s);
list_t *add_node(list_t **head, const char *str);
char *_strdup(char *str);

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
 *_strdup - returns a pointer to a new string which is a duplicate
 *           of the string str.
 *@str: string to be duplicated
 *
 *Return: if string = NULL or if memory is insufficient: NULL
 *        pointer to the duplicated string on success.
 */
char *_strdup(char *str)
{
	int j, c;
	char *ptr;

	c = 0;
	if (str == NULL)
		return (NULL);

	j = _strlen(str);
	ptr = malloc(sizeof(char) * (j + 1));
	if (ptr == NULL)
		return (NULL);
	while ((ptr[c] = str[c]) != '\0')
		c++;

	return (ptr);
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

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (0);
	temp->str = _strdup(str);
	temp->len = _strlen(str);
	temp->next = *head;

	*head = temp;
	return (*head);
}
