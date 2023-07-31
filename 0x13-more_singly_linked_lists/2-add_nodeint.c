#include "lists.h"

/**
 * add_nodeiint-adds a node to a list at the begining
 * @head: pointer to the node head
 * @n: the data to be inserted to the node
 * Return: pointer to new node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *nodaya;

	nodaya = malloc(sizeof(listint_t));

	if (!nodaya)
		return (NULL);
	nodaya->n = n;
	nodaya->next = *head;
	*head = nodaya;

	return (nodaya);
}
