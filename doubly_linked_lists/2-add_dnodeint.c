#include "lists.h"

/**
 * add_dnodeint - adding the new node
 * @head: head of list
 * @n: new node
 * Return: address of new
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *a;
	dlistint_t *b;
	
	a = malloc(sizeof(dlistint_t));
	if (a == NULL)
		return (NULL);

	a->n = n;
	a->prev = NULL;
	b = *head;

	if (b != NULL)
	{
		while (b->prev != NULL)
			b = b->prev;
	}
	a->next = b;

	if (b != NULL)
		b->prev = a;

	*head = a;

	return (a);
}
