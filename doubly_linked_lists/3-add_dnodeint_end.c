#include "lists.h"

/**
 * add_dnodeint_end - function that adds a new node at the end
 * @head: head of list
 * @n: element value
 * Return: address of new element of NULL
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node;
	dlistint_t *a;

	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);

	node->n = n;
	node->next = NULL;

	a = *head;

	if (a != NULL)
	{
		while (a->next != NULL)
			a = a->next;
		a->next = node;
	}
	else
	{
		*head = node;
	}
	node->prev = a;

	return (node);
}
