#include "lists.h"

/**
 * listint_len-functions that returns the number of nodes in a list
 * @h: linked list
 * Return: number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
