#include "lists.h"
#include <stdlib.h>

/**
 * free_list - frees a linked list
 * @head: list_t list to be freed
 */
void free_list(list_t *head)
{
	list_t *first_node;

	while ((first_node = head) != NULL)
	{
		head = head->next;
		free(first_node->str);
		free(first_node);

	}
}
