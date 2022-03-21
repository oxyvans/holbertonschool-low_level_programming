#include "lists.h"

/**
 * listint_len - main
 * @h: list.
 *
 * Return: size_t.
 **/

size_t listint_len(const listint_t *h)
{
	size_t cont = 0;

	while (h != NULL)
	{
		cont++;
		h = h->next;
	}

	return (cont);
}
