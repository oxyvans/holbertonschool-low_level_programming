#include "lists.h"

/**
 * insert_nodeint_at_index - main
 * @head: list.
 * @idx: index
 * @n: int
 * Return: int.
 **/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *aux = *head;
	listint_t *new;
	unsigned int i = 0;
	
	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (*head);
	}
	
	while (aux && (i != (idx - 1)))
	{
		aux = aux->next;
		i++;
	}

	if ((i == (idx - 1)) && aux)
	{	
		new->next = aux->next;
		aux->next = new;
		return (new);
	}
	
	return (NULL);
}
