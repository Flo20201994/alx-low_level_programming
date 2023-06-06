#include "lists.h"

/**
 * pop_listint - Deletes head node of the linked list
 * @head: Points the first element in the linked list
 *
 * Return: The data in the elements that has been
 * deleted or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *w;
	int i;

	if (!head || !*head)
		return (0);

	i = (*head)->n;
	w = (*head)->next;
	free(*head);
	*head = w;

	return (i);
}
