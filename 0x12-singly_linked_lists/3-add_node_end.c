#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - Adds a new node in the end of the list_t list.
 * @head: The head of the linked list.
 * @str: String to place in the list.
 *
 * Return: Address of the head.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *immediate_node;
	size_t w;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);

	for (w = 0; str[w]; w++)
		;
	new_node->len = w;
	new_node->next = NULL;
	immediate_node = *head;

	if (immediate_node == NULL)
	{
		*head = new_node;
	}
	else
	{
		while (immediate_node->next != NULL)
			immediate_node = immediate_node->next;
		immediate_node->next = new_node;
	}

	return (*head);
}
