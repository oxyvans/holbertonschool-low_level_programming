#include "lists.h"

/**
 * detectLoop - main
 * @list: list.
 *
 * Return: list
 **/

int detectLoop(listint_t *list)
{
	listint_t *slow_p = list, *fast_p = list;

	while (slow_p && fast_p && fast_p->next)
	{
		slow_p = slow_p->next;
		fast_p = fast_p->next->next;

		if (slow_p == fast_p)
			return (1);
	}
	return (0);
}

/**
 * find_listint_loop - main
 * @head: list.
 *
 * Return: list
 **/

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow_p = head, *fast_p = head;

	if (head == NULL)
		return (NULL);

	if (detectLoop(head))
	{
		return (NULL);
	}
	else
	{
		fast_p = head->next;
		slow_p = head;

		while (fast_p && fast_p < slow_p)
		{
			slow_p = slow_p->next;
			fast_p = fast_p->next;
		}

		return (fast_p);
	}
}
