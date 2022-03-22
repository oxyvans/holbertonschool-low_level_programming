#include "lists.h"

/**
 * reverse_listint - main.
 * @head: list.
 *
 * Return: reversed list
 **/

listint_t *reverse_listint(listint_t **head)
{
	listint_t *c;
	listint_t *t;

	if (*head == NULL)
		return (NULL);

	c = *head;
	t = NULL;

	while (*head != NULL)
	{
		c = (*head)->next;
		(*head)->next = t;
		t = *head;
		*head = c;
	}
	*head = t;

	return (*head);
}
