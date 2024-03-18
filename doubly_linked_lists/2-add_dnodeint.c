#include "lists.h"

/**
 * add_dnodeint - function that adds a new node at the beginning
 * @head: head of list
 * @n: element value
 * Return: address or NULL
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node;
	dlistint_t *a;

	node = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	node->n = n;
	node->prev = NULL;
	a = *head;

	if (a != NULL)
	{
		while (a->prev != NULL)
			h = h->prev;
	}
	node->next = a;

	if (a != NULL)
		a->prev = node;

	*head = node;

	return (node);
}
