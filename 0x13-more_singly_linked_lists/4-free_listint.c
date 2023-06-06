#include "lists.h"

/**
 * free_listint - Free the  linked list
 * @head: listint_t list to be free
 */
void free_listint(listint_t *head)
{
	listint_t *k;

	while (head)
	{
		k = head->next;
		free(head);
		head = k;
	}
}
