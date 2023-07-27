#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end-adds a node to the end of the list
 * @head: 2x pointer to node head
 * @str: string to be added to the node
 * Return: pointer to the added node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *listaya;
	list_t *tempaya =  *head;
	unsigned int length = 0;

	while (str[length])
		length++;

	listaya =  malloc(sizeof(list_t));

	if (!listaya)
		return (NULL);
	listaya->str = strdup(str);
	listaya->len = length;
	listaya->next = NULL;

	if (*head == NULL)
	{
		*head = listaya;
		return (listaya);
	}
	while (tempaya->next)
		tempaya = tempaya->next;
	tempaya->next =  listaya;

	return (listaya);
}

