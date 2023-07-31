#include "lists.h"

/**
 * print_listint-prints number of elements in a list
 * @h: a singly linked list of type listint_t
 * Return: no. of elements in input list
 */

size_t print_listint(const listint_t *h)
{
	int i = 0;

	while (h)
	{
		printf("%d\n", h->n);
		i++;
		h = h->next;
	}
	return (i);
}

