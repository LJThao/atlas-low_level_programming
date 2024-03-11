#include "lists.h"

/**
 * print_listint - function that prints all the elements of listint_t
 * @h: pointer h
 * Return: number of the nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t node = 0;

	while (h)
	{
		printf("%d\n", h->n);
		node++;

		h = h->next;
	}
	return (node);
}
