#include "lists.h"

/**
 * sum_listint - This calculates the sum of the data in a listint_t list
 * @head: The first node in the linked list
 *
 * Return: Resulting sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *p = head;

	while (p)
	{
		sum += p->n;
		p = p->next;
	}
	return (sum);
}
