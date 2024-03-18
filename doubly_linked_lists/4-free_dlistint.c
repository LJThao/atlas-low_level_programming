#include "lists.h"

/**
 * free_dlistint - function that frees a list
 * @head: head of list
 * Return: nodes
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *free;

	if (head != NULL)
		while (head->prev != NULL)
			head = head->prev;

	while ((free = head) != NULL)
	{
		head = head->next;
		free(free);
	}
}
