#include "lists.h"

/**
 * add_nodeint_end - main
 * @head: list.
 * @n: int
 * Return: list
 **/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *aux, *res = *head;

	aux = malloc(sizeof(listint_t));

	if (aux == NULL)
		return (NULL);

	aux->n = n;
	aux->next = NULL;

	if (res == NULL)
		*head = aux;
	else
	{
		while (res->next != NULL)
			res = res->next;
		res->next = aux;
	}

	return (aux);
}
