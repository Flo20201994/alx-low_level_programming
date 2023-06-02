#include "lists.h"
#include <stdlib.h>

/**
 * list_len - Returns number of elements in a linked list
 * @h: pointer to the list_t list
 *
 * Return: Number of elements in h
 */
size_t list_len(const list_t *h)
{
	size_t k = 0;

	while (h)
	{
		k++;
		h = h->next;
	}
	return (k);
}
