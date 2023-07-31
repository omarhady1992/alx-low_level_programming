#include "lists.h"

/**
 * get_nodeint_at_index-gets the node at index i
 * @head: listint_t object input
 * @index: the index of target node
 * Return: Data in targeted node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *t = head;

	while (t && i < index)
	{
		t = t->next;
		i++;
	}
	return (t ? t : NULL);
}
