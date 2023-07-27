#include "lists.h"

/**
 * print_list-a function that prints elements of a list
 * @h: ptr to the list starting node
 * Return: # of elements printed
 */

size_t print_list(const list_t *h)
{
	size_t size = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("%u %s\n", h->len, h->str);
		h = h->next;
		s++;
	}
	return (s);
}
