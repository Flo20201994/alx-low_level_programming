#include "lists.h"

/**
 * add_nodeint - Adds new node at the start of linked list
 * @head: The pointer to first node in the list
 * @n: The data to insert in the new node
 *
 * Return: Pointer to the new node or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *e;

	e = malloc(sizeof(listint_t));
	if (!e)
		return (NULL);

	e->n = n;
	e->next = *head;
	*head = e;

	return (e);
}
