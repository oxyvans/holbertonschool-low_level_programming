#include "lists.h"

/**
 * free_listint - main
 * @head: list.
 *
 * Return: list.
 **/

void free_listint(listint_t *head)
{
	listint_t *d;

	if (head != NULL)
	{
		while (head->next)
		{
			d = head;
			head = head->next;
			free(d);
		}
		free(head);
	}
}
