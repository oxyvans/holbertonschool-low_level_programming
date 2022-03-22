#include "lists.h"

/**
 * delete_nodeint_at_index - main
 * @head: list.
 * @index: index
 * Return: int.
 **/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *aux = *head;
	listint_t *del;
	unsigned int i = 0;

	if (aux == NULL)
		return (-1);

	if (index == 0)
	{
		del = *head;
		*head = del->next;
		free(del);
		return (1);
	}

	while (aux && (i != (index - 1)))
	{
		aux = aux->next;
		i++;
	}

	if ((i == (index - 1)) && aux)
	{
		del = aux->next;
		aux->next = del->next;
		free(del);
		return (1);
	}

	return (-1);
}
