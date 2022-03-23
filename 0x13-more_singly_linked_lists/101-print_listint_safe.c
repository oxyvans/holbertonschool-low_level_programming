#include "lists.h"

/**
 * print_listint_safe - main
 * @head: list.
 *
 * Return: size_t.
 **/

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *slow_p = head, *fast_p = head;
	size_t cont = 0;

	if (head == NULL)
		return (cont);

	fast_p = head->next;
	slow_p = head;

	while (fast_p && fast_p < slow_p)
	{
		printf("[%p] %i\n", (void *)slow_p, slow_p->n);
		slow_p = slow_p->next;
		fast_p = fast_p->next;
		cont++;
	}
	printf("[%p] %i\n", (void *)slow_p, slow_p->n);
	cont++;

	if (fast_p)
	{
		printf("-> [%p] %i\n", (void *)fast_p, fast_p->n);
	}

	return (cont);
}
