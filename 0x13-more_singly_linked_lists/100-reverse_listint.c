#include "lists.h"

/**
 * reverse_listint-reverses the order of a linked list's elements
 * @head: double pointer to the first node
 * Return:pointer to new begining
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *back = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = back;
		back = *head;
		*head = next;
	}
	*head = back;

	return (*head);
}

