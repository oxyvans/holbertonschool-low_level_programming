#include "lists.h"

/**
 * print_list - print list.
 * @h: list.
 *
 * Return: size.
 **/

size_t print_list(const list_t *h)
{
	size_t cont = 0;

	while (h != NULL)
	{
		if (h->str != NULL)
			printf("[%u] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");

		cont++;
		h = h->next;
	}

	return (cont);
}
