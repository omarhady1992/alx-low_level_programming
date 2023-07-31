#include "lists.h"

/**
 * sum_listint-sums elements of a list
 * @head: listint_object
 * Return: sum of the list elements
 */

int sum_listint(listint_t *head)
{
	listint_t *t = head;
	int sum = 0;

	while (t)
	{
		sum += t->n;
		t = t->next;
	}
	return (sum);
}
