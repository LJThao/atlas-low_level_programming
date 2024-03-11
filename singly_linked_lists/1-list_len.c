#include "lists.h"

/**
 * list_len - function that returns the number of elements in list_t
 * @h: linked list
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	size_t node = 0;

	while (h)
	{
		h = h->next;
		node++;
	}
	return (node);
}
