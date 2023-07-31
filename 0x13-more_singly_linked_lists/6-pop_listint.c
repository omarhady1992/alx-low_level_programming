#include "lists.h"

/**
 * pop_listint-delets the head of litint_t
 * @head: pointer to pointer of head
 * Return: the data in head
 */

int pop_listint(listint_t **head)
{
	listint_t *t;
	int number;

	if (!head || !*head)
		return (0);
	number = (*head)->n;
	t = (*head)->next;
	free(*head);
	*head = t;

	return (number);
}
