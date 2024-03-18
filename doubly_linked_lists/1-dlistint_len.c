#include "lists.h"

/**
 * dlistint_len - function that returns the number of elements in a linked list
 * @h: head of list
 * Return: nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	int add;

	add = 0;

	if (h == NULL)
		return (add);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		add++;
		h = h->next;
	}
	return (add);
}
