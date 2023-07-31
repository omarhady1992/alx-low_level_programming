#include "lists.h"

/**
 * add_nodeint_end-adds a node at the end
 * @head: pointer to the first element in the list
 * @n: data to insert in the new element
 * Return: pointer to the new node if successful
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *nodaya;
	listint_t *tempaya = *head;

	nodaya = malloc(sizeof(listint_t));

	if (!nodaya)
		return (NULL);
	nodaya->n = n;
	nodaya->next = NULL;

	if (*head == NULL)
	{
		*head = nodaya;
		return (nodaya);
	}

	while (temp->next)
		temp = temp->next;
	temp->next = nodaya;
	return (nodaya);
}

