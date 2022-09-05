#include "lists.h"

/**
 *sum_dlistint - finds the sum of all the data in a dlistint_t list
 *@head: head pointer
 *
 *Return: sum of all the data
 *        0, if the list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head->next != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
