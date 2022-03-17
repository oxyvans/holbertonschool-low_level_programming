#include "lists.h"

/**
 * list_len - main
 * @h: list.
 *
 * Return: size.
 **/

size_t list_len(const list_t *h)
{
	size_t cont = 0;

	while (h != NULL)
	{
		cont++;
		h = h->next;
	}

	return (cont);
}
