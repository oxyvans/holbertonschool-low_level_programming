#include "lists.h"

/**
 * print_listint - main
 * @h: list.
 *
 * Return: size_t.
 **/

size_t print_listint(const listint_t *h)
{
	size_t cont = 0;

	while (h != NULL)
	{
		printf("%i\n", h->n);
		cont++;
		h = h->next;
	}

	return (cont);
}
