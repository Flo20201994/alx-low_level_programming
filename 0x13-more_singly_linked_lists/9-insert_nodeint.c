#include "lists.h"

/**
 * insert_nodeint_at_index - This inserts new node in linked list,
 * with given position
 * @head: Points to the first node in the list
 * @idx: This index is where the new node is added
 * @n: The data to insert in the new node
 *
 * Return: Points to the new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int j;
	listint_t *e;
	listint_t *p = *head;

	e = malloc(sizeof(listint_t));
	if (!e || head)
		return (NULL);

	e->n = n;
	e->next = NULL;

	if (idx == 0)
	{
		e->next = *head;
		*head = e;
		return (e);
	}

	for (j = 0; p && j < idx; j++)
	{
		if (j == idx - 1)
		{
			e->next = p->next;
			p->next = e;
			return (e);
		}
		else
			p = p->next;
	}
	return (NULL);
}
