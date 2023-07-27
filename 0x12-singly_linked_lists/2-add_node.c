#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node-adds a node to a list
 * @head: 2x pointer to the
 * @str: string entry of the node
 * Return: the address of the new node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *listaya;
	unsigned int length = 0;

	while (str[length])
		length++;
	listaya = malloc(sizeof(list_t));

	if (!listaya)
		return (NULL);

	listaya->str = strdup(str);
	listaya->len = length;
	listaya->next = (*head);
	(*head) = listaya;

	return (*head);
}
