#include "lists.h"

/**
 *sum_listint - adds all the data of a listint_t list
 *@head: pointer to head of the list
 *
 *Return: sum of the list
 *        0 if the list is empty.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
