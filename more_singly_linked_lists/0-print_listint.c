#include "lists.h"

/**
 * print_listint - function that prints all the elements of listint_t
 * @h: pointer h
 * Return: number of the nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t node = 1;

	if (h == NULL)
		return (0);

	while (h->next != NULL)
	{
		printf("%d\n", h->n);

		h = h->next;
		node++;

	}
	printf("%d\n", h->);;

	return (node);
}
