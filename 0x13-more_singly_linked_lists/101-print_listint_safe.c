#include "lists.h"

/**
 *print_listint_safe - prints a listint_t linked list
 *@head:  pointer to head of the list
 *
 *Return: the number of nodes in the list
 *        an exit status of 98 if function fails
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	listint_t *temp, *next;

	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
		exit(98);

	while (head)
	{
		printf("%d\n", head->n);
		count++;
		if (head->next == temp)
			break;
		next = head->next;
		head->next = temp;
		head = next;
	}
	return (count);
}
