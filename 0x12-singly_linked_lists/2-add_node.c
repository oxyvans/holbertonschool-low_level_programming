#include "lists.h"

/**
 * add_node - main
 * @head: list.
 * @str: string
 *
 * Return: size.
 **/

list_t *add_node(list_t **head, const char *str)
{
        list_t *aux;

        aux = malloc(sizeof(list_t));

        if (aux == NULL)
                return (NULL);

        if (str == NULL)
        {
                free(aux);
                return (NULL);
        }

        aux->str = strdup(str);
        aux->len = strlen(str);
        aux->next = *head;
	*head = aux;
	
	return (aux);
}
