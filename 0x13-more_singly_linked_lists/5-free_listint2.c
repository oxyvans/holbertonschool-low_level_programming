#include "lists.h"

/**
 * free_listint2 - main
 * @head: list.
 *
 * Return: list.
 **/

void free_listint2(listint_t **head)
{
	listint_t *d;

	if (head != NULL)
	{
		while ((*head)->next)
		{
			d = *head;
			*head = (*head)->next;
			free(d);
		}
		free(*head);
		*head = NULL;
	}
}
