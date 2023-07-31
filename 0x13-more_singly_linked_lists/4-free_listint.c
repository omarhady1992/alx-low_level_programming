#include "lists.h"

/**
 * free_listint-frees lists from memory
 * @head: the listint_t to be freed
 */

void free_listint(listint_t *head)
{
	listint_t *t;

	while (head)
	{
		t = head->next;
		free(head);
		head = t;
	}
}
