#include "lists.h"
#include <stdlib.h>

/**
 * len_list-measures the length of a linked list
 * @h: input head pointer
 * Return: number of elements in the list
 */

size_t list_len(const list_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}
	return (num);
}
