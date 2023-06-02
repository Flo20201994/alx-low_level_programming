#include "lists.h"
#include <stdio.h>

/**
 * print_list - Prints all elements of a linked list
 * @h: Pointer to the list_t list to print
 *
 * Return: The number of nodes to print
 */
size_t print_list(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");

		else
			printf("[%d] %s\n", h->len, h->str);

		n++;
		h = h->next;
	}

	return (n);
}
