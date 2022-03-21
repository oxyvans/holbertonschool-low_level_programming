#include "lists.h"

/**
 * pop_listint - main
 * @head: list.
 *
 * Return: int.
 **/

int pop_listint(listint_t **head)
{
	int res;
	listint_t *aux;

	res = (*head)->n;
	aux = (*head)->next;
	free(*head);
	*head = aux;
	return (res);
}
