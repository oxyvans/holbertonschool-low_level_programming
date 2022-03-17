#include "lists.h"

/**
 * add_node_end - main
 * @head: list.
 * @str: string
 *
 * Return: list.
 **/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *aux, *res = *head;

	aux = malloc(sizeof(list_t));

	if (aux == NULL)
	{
		return (NULL);
	}
	if (str == NULL)
	{
		free(aux);
		return (NULL);
	}

	aux->str = strdup(str);
	aux->len = strlen(str);
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
