#include "lists.h"

/**
 * add_nodeint_end - Adds node at the end of the linked list
 * @head: Pointer to the first element in the list
 * @n: Data to put in the new element
 *
 * Return: Pointer to new node, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *w;
	listint_t *p = *head;

	w = malloc(sizeof(listint_t));
	if (!w)
		return (NULL);

	w->n = n;
	w->next = NULL;

	if (*head == NULL)
	{
		*head = w;
		return (w);
	}

	while (p->next)
		p = p->next;

	p->next = w;

	return (w);
}
