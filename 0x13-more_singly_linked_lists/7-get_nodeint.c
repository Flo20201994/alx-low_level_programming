#include "lists.h"

/**
 * get_nodeint_at_index - Returns the node of certain index in the linked list
 * @head: First node of the linked list
 * @index: Index of node to return
 *
 * Return: Pointer of node to search for or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int k = 0;
	listint_t *p = head;

	while (p && k < index)
	{
		p = p->next;
		k++;
	}
	return (p ? p : NULL);
}
