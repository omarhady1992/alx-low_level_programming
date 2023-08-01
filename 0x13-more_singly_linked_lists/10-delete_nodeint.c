#include "lists.h"

/**
 * delete_nodeint_at_index-deletes a node at a given index in a linked list
 * @head: double pointer to listint_t head node
 * @index: th index of node to b deleted
 * Return: 1 if successful - if not
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = *head;
	listint_t *curr = NULL;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	while (i < index - 1)
	{
		if (!temp || !temp->next)
			return (-1);

		temp =temp->next;
		i++;
	}
	curr = temp->next;
	temp->next = curr->next;
	free(curr);

	return (1);
}
