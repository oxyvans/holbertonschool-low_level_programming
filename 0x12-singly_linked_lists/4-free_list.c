#include "lists.h"

/**
 * free_list - main
 * @head: list.
 *
 * Return: list.
 **/

void free_list(list_t *head)
{
	list_t *d;

	if (head != NULL)
	{
		while (head->next)
		{
			d = head;
			head = head->next;
			free(d->str);
			free(d);
		}
		free(head->str);
		free(head);
	}
}
