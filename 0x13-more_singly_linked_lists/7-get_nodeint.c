#include "lists.h"

/**
 * get_nodeint_at_index - main
 * @head: list.
 * @index: index
 *
 * Return: list.
 **/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *aux = head;
	unsigned int i = 0;

	while (aux && i != index)
	{
		aux = aux->next;
		i++;
	}

	if (aux != NULL && i == index)
		return (aux);
	return (NULL);
}
