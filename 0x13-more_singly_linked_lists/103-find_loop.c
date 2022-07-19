#include "lists.h"

/**
 *find_listint_loop - finds a loop in a linked list
 *@head: pointer to head of the list
 *
 *Return: address of the node where loop starts
 *        NULL if there's no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow_p = head, *fast_p = head;

	while (slow_p && fast_p && fast_p->next)
	{
		slow_p = slow_p->next;
		fast_p = fast_p->next->next;
		if (slow_p == fast_p)
			return (slow_p);
	}
	return (NULL);
}
